// 主電源基板
#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <string.h>
#include "soft_i2c.h"
#include "lcd_i2c.h"


typedef union tagPWM4 {
    uint16_t pwm[4];
    uint8_t buf[8];
} PWM4;

#define CNT_MODE1 10
#define CNT_MODE2 50


#define SPI_BYTES 8 /* SPI受信するデーターのバイト数 */
#define MAX_DIFF 200 /* 最大変化量 */
#define PWM_NT 12000 /* PWM 中央値 */

uint16_t pwm0[4] = {PWM_NT,PWM_NT,PWM_NT,PWM_NT}; // PWM 旧値
PWM4 data; // SPI受信格納先


void set_pwm(void) {
    uint8_t i;
    uint16_t d;
    uint16_t d0;

    for (i=0; i<4; i++) {
        d = data.pwm[i];
        if (d < 2000) return;
        if (d > 22000) return;
        d0 = pwm0[i];
        if (d0) {
            if (d0 > d) {
                if ((d0 - d) > MAX_DIFF) {
                    d = d0 - MAX_DIFF;
                }
            }
            if (d0 < d) {
                if ((d - d0) > MAX_DIFF) {
                    d = d0 + MAX_DIFF;
                }
            }
        }
        pwm0[i] = d;
    }

    if ((data.pwm[1] == PWM_NT) && (data.pwm[2] == PWM_NT)) {
        GEARR_SetHigh();
        GEARL_SetHigh();
    }
    else {
        GEARR_SetLow();
        GEARL_SetLow();
    }
    
    PWM1_DutyCycleSet(pwm0[0]);
    PWM2_DutyCycleSet(pwm0[1]);
    PWM3_DutyCycleSet(pwm0[2]);
    PWM4_DutyCycleSet(pwm0[3]);
    PWM1_LoadBufferSet();
    PWM2_LoadBufferSet();
    PWM3_LoadBufferSet();
    PWM4_LoadBufferSet();
    PWM1_Start();
    PWM2_Start();
    PWM3_Start();
    PWM4_Start();
}


// 装填サーボ閉
void servo_close(void) {
    data.pwm[0] = pwm0[0] = 12000 + 2800;
    data.pwm[1] = pwm0[1] = PWM_NT;
    data.pwm[2] = pwm0[2] = PWM_NT;
    data.pwm[3] = pwm0[3] = 12000 - 2800;
}


void int_strb(void) {
    uint8_t b, d; //, *dp = data.buf;

//    LED1_SetHigh();
    for (uint8_t idx=0; idx<SPI_BYTES; idx++) {
        d = 0;
        for (b=0; b<8; b++) {
            while (SPI_CLOCK_PORT == 0) {} // CLOCK立ち上がりをソフトループで待つ
            d <<= 1;
            while (SPI_CLOCK_PORT == 1) {} // CLOCK立ち下がりをソフトループで待つ
            d |= SPI_DATA_PORT;
        }
        data.buf[idx] = d;
    }
    set_pwm();
//    LED1_SetLow();
}


uint8_t i;
uint8_t mode = 0;
uint8_t cnt_push = 0;


void main(void)
{
    SYSTEM_Initialize();
    IOCCF4_SetInterruptHandler(int_strb);
    servo_close();
    PICOUT_SetHigh();
    DCDC_SetHigh();
    LED2_SetHigh();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    LED1_SetHigh();
    __delay_ms(100);
    LED1_SetLow();
    
    while (1) {
        CLRWDT();
        if (mode == 0) {
            if (PICIN_GetValue()) { // ボタン離れている
                cnt_push ++;
                if (cnt_push >= CNT_MODE1) {
                    cnt_push = 0;            
                    mode = 1;
                }
            }
            else {
                cnt_push = 0;            
            }
        }
        else if (mode == 1) {
            if (PICIN_GetValue()) { // ボタン離れている
                cnt_push = 0;
            }
            else {
                cnt_push ++;
                if (cnt_push >= CNT_MODE2) {
                    mode = 2;
                }
            }
        }
        else {
            DCDC_SetLow();
            PICOUT_SetLow();
            LED2_SetLow();
        }
        __delay_ms(10);
    }




}
