/**
 * @brief		OLED模块显示的菜单函数
 * @author	武术擂台车小组
 * @global	uint16_t Adc1_Buff[16]	-	存放ADC1 16个端口转换结果
 * @version v0.0.0
 * @date		2021/01/25
 */
 
 /*头文件部分*/
 #include "system.h"
 #include "menu.h"
 #include "oled.h"
 #include "adc.h"
  
/*全局变量部分*/
extern uint16_t Adc1_Buff[16];

/**
 * @brief		显示ADC通道数值界面
 * @param		无
 * @return	无
 */
void Menu_Adc1_Page(void)
{
	//标题
	OLED_ShowString(0,0,"ADC:",12);
	
	//第一列
	OLED_ShowString(0,12,"1-4:",12);
	OLED_ShowNumber(24,12,(int32_t) Adc1_Buff[0],12);
	OLED_ShowNumber(50,12,(int32_t) Adc1_Buff[1],12);
	OLED_ShowNumber(76,12,(int32_t) Adc1_Buff[2],12);
	OLED_ShowNumber(100,12,(int32_t) Adc1_Buff[3],12);
	
	//第一列
	OLED_ShowString(0,24,"5-8:",12);
	OLED_ShowNumber(24,24,(int32_t) Adc1_Buff[4],12);
	OLED_ShowNumber(50,24,(int32_t) Adc1_Buff[5],12);
	OLED_ShowNumber(76,24,(int32_t) Adc1_Buff[6],12);
	OLED_ShowNumber(100,24,(int32_t) Adc1_Buff[7],12);
	
	//第一列
	OLED_ShowString(0,36,"9- :",12);
	OLED_ShowNumber(24,36,(int32_t) Adc1_Buff[8],12);
	OLED_ShowNumber(50,36,(int32_t) Adc1_Buff[9],12);
	OLED_ShowNumber(76,36,(int32_t) Adc1_Buff[10],12);
	OLED_ShowNumber(100,36,(int32_t) Adc1_Buff[11],12);
	
	//第一列
	OLED_ShowString(0,48,"-16:",12);
	OLED_ShowNumber(24,48,(int32_t) Adc1_Buff[12],12);
	OLED_ShowNumber(50,48,(int32_t) Adc1_Buff[13],12);
	OLED_ShowNumber(76,48,(int32_t) Adc1_Buff[14],12);
	OLED_ShowNumber(100,48,(int32_t) Adc1_Buff[15],12);
	
	OLED_Refresh_Gram();
}
 


