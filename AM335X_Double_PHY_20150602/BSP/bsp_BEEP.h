/*****************************************Copyright(C)******************************************
*******************************************浙江方泰*********************************************
**-----------------------------------------文件信息---------------------------------------------
**文    件    名: bsp_BEEP.h
**硬          件: am3352
**创    建    人: wangyao
**创  建  日  期: 2013-11-11
**最  新  版  本: V0.2
**描          述: BEEP的头文件,BEEP包括板上蜂鸣器和外部告警
**---------------------------------------历史版本信息-------------------------------------------
**修    改    人: 
**日          期: 
**版          本: 
**描          述:
**----------------------------------------------------------------------------------------------
***********************************************************************************************/
#ifndef	__BSP_BEEP_H_
#define	__BSP_BEEP_H_
/* Includes-----------------------------------------------------------------------------------*/
#include	"bsp_conf.h"
/* Private define-----------------------------------------------------------------------------*/
// BEEP状态控制
typedef enum
{
	BSPBEEP_STATE_CLOSE=BSP_STATE_RESET,		// 关
	BSPBEEP_STATE_OPEN=BSP_STATE_SET,			// 开
	BSPBEEP_STATE_OVERTURN=BSP_STATE_OVERTURN,	// 翻转
}_BSPBEEP_STATE;
// ALARM状态控制
typedef enum
{
	BSPALARM_STATE_CLOSE=BSP_STATE_RESET,	// 关
	BSPALARM_STATE_OPEN=BSP_STATE_SET,		// 开
	BSPALARM_STATE_OVERTURN=BSP_STATE_OVERTURN,	// 翻转
}_BSPALARM_STATE;
/* Private typedef----------------------------------------------------------------------------*/
/* Private macro------------------------------------------------------------------------------*/
/* Private variables--------------------------------------------------------------------------*/
/* Private function prototypes----------------------------------------------------------------*/
/* Private functions--------------------------------------------------------------------------*/

/***********************************************************************************************
* Function		: BSP_BEEPStart
* Description	: BEEP响声，若BEEP已处于响声状态，以最后一次的时间为准。
* Input			: BeepTime_Tick：响声时间，Tick单位。BeepTime_Tick后Beep自动关闭。
* Output		: 
* Note(s)		: 
* Contributor	: 2010-12-11   王耀
***********************************************************************************************/
void BSP_BEEPStart(INT16U BeepTime_Tick);
 
/***********************************************************************************************
* Function		: BSP_BEEPWrite
* Description	: BEEP写,改变BEEP状态
* Input			: state:BEEP状态,_BSPBEEP_STATE
				  	BSPBEEP_STATE_CLOSE		关
					BSPBEEP_STATE_OPEN		开
					BSPBEEP_STATE_OVERTURN	翻转
* Output		: 
* Note(s)		: 
* Contributor	: 2010-12-11   王耀
***********************************************************************************************/
void BSP_BEEPWrite(_BSPBEEP_STATE state);

 /***********************************************************************************************
* Function		: BSP_BEEPTimeTick
* Description	: 系统调用，每个Tick调用一次。
* Input			: 
* Output		: 
* Note(s)		: 
* Contributor	: 2010-12-11   王耀
***********************************************************************************************/
void BSP_BEEPTimeTick(void);

/***********************************************************************************************
* Function		: BSP_BEEPInit
* Description	: 驱动初始化
* Input			: 
* Output		: 
* Note(s)		: 
* Contributor	: 2010-12-11   王耀
***********************************************************************************************/
void BSP_BEEPInit(void);
#endif	//__BSP_BEEP_H_
/************************(C)COPYRIGHT 2013 浙江方泰*****END OF FILE****************************/
