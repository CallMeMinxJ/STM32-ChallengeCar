/**
 * @brief		擂台车主函数文件
 * @author	武术擂台车小组
 * @version v1.0.0
 * @date		2021/01/23
 */

/*头文件部分*/
#include "system.h"
#include "control.h"
#include "key.h"
#include "oled.h"

/**
 * @brief		程序主函数
 * @param		无
 * @return	无
 */
int main (void)
{
	/*初始化部分*/
	Delay_Init();//延迟函数初始化
	Nvic_Init();//中断配置
	JTAGDisable();//禁用Jtag
	Car_Init();//车辆初始化
	
	OLED_ShowString(5,5,"OK",12);
	OLED_Refresh_Gram();

	
	while(1)
	{
		//按键检测功能实现
		Key_Function(Key_Scan(Mode_Ucnt));

	}
}

