// ECE 36201 lab 7 solution Dave Kozel 10-13-2020
//
#include "stm32l476xx.h"
#include "SysClock.h"
#include "GPIO.h"
#include "SysTimer.h"
#include "EXTI.h"
//*************************************  32L476GDISCOVERY ***************************************************************************
// STM32L4:  STM32L476VGT6 MCU = ARM Cortex-M4 + FPU + DSP, 
//           LQFP100, 1 MB of Flash, 128 KB of SRAM
//           Instruction cache = 32 lines of 4x64 bits (1KB)
//           Data cache = 8 lines of 4x64 bits (256 B)
//
// Joystick (MT-008A): 
//   Right = PA2        Up   = PA3         Center = PA0
//   Left  = PA1        Down = PA5
//
// User LEDs: 
//   LD4 Red   = PB2    LD5 Green = PE8
//   
//
//****************************************************************************************************************

int main(void){

	System_Clock_Init(); // Switch System Clock = 80 MHz
	GPIO_Init();
	SysTick_Init();
	EXTI_Init();
	while(1){
		delay(1000);
		// Togle Red LED
		GPIOB->ODR ^= (1UL<<2);
	}
}



