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

/**
 * @brief		�����������Ƶĳ�ʼ��
 * @param		��
 * @return	��
 */
void Car_Init(void)
{
	OLED_Init();
	Key_Init();//������ʼ��
	Led_Init();//LED��ʼ��
}
 


