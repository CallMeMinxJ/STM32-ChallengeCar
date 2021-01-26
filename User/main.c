/**
 * @brief		��̨���������ļ�
 * @author	������̨��С��
 * @version v1.0.0
 * @date		2021/01/23
 */

/*ͷ�ļ�����*/
#include "system.h"
#include "control.h"
#include "key.h"
#include "oled.h"

/**
 * @brief		����������
 * @param		��
 * @return	��
 */
int main (void)
{
	/*��ʼ������*/
	Delay_Init();//�ӳٺ�����ʼ��
	Nvic_Init();//�ж�����
	JTAGDisable();//����Jtag
	Car_Init();//������ʼ��
	
	OLED_ShowString(5,5,"OK",12);
	OLED_Refresh_Gram();

	
	while(1)
	{
		//������⹦��ʵ��
		Key_Function(Key_Scan(Mode_Ucnt));

	}
}

