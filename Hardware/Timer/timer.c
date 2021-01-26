/**
 * @brief		系统TIM时钟相关函数
 * @author	武术擂台车小组
 * @version v0.0.0
 * @date		2021/01/25
 */
 
/*头文件部分*/
#include "system.h"
#include "timer.h"

/**
 * @brief		时钟3初始化函数
 * @param		uint16_t ARR	-	预装载值
 *					uint16_t PSC	-	时钟预分频系数
 * @return	无
 */
void TIM3_Init(uint16_t ARR,uint16_t PSC)
{
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE); //时钟使能
	
	//定时器TIM3初始化
	TIM_TimeBaseStructure.TIM_Period = ARR; //设置在下一个更新事件装入活动的自动重装载寄存器周期的值	
	TIM_TimeBaseStructure.TIM_Prescaler =PSC; //设置用来作为TIMx时钟频率除数的预分频值
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1; //设置时钟分割:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM向上计数模式
	TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure); //根据指定的参数初始化TIMx的时间基数单位
 
	TIM_ITConfig(TIM3,TIM_IT_Update,ENABLE ); //使能指定的TIM3中断,允许更新中断
	TIM_Cmd(TIM3, ENABLE);  //使能TIM3
}

/**
 * @brief		时钟3中断函数
 * @param		无
 * @return	无
 */
void TIM3_IRQHandler(void)
{
	if (TIM_GetITStatus(TIM3, TIM_IT_Update) != RESET)  //检查TIM3更新中断发生与否
	{
		TIM_ClearITPendingBit(TIM3, TIM_IT_Update  );  //清除TIMx更新中断标志 
	}
}









