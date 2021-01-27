/**
 * @brief		包含整个车辆控制相关函数
 * @author	武术擂台车小组
 * @version v0.0.0
 * @date		2021/01/24
 */
 
 /*头文件部分*/
#include "system.h"
#include "control.h"
#include "key.h"
#include "led.h"
#include "oled.h"
#include "timer.h"
#include "adc.h"
#include "dma.h"

/**
 * @brief		整个车辆控制的初始化
 * @param		无
 * @return	无
 */
void Car_Init(void)
{
	OLED_Init();						//OLED模块初始化
	Key_Init();							//按键初始化
	Led_Init();							//LED初始化
	TIM3_Init(1000-1,72-1);	//时钟3初始化 1ms
	Dma_Adc1_To_GlobalVar();//ADC1 DMA 通道初始化
	Adc1_Init();						//ADC1初始化
}
 


