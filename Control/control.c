/**
 * @brief		������������������غ���
 * @author	������̨��С��
 * @version v0.0.0
 * @date		2021/01/24
 */
 
 /*ͷ�ļ�����*/
#include "system.h"
#include "control.h"
#include "key.h"
#include "led.h"
#include "oled.h"
#include "timer.h"
#include "adc.h"
#include "dma.h"

/**
 * @brief		�����������Ƶĳ�ʼ��
 * @param		��
 * @return	��
 */
void Car_Init(void)
{
	OLED_Init();						//OLEDģ���ʼ��
	Key_Init();							//������ʼ��
	Led_Init();							//LED��ʼ��
	TIM3_Init(1000-1,72-1);	//ʱ��3��ʼ�� 1ms
	Dma_Adc1_To_GlobalVar();//ADC1 DMA ͨ����ʼ��
	Adc1_Init();						//ADC1��ʼ��
}
 


