/*****************************************Copyright(C)******************************************
*******************************************�㽭��̩*********************************************
**-----------------------------------------�ļ���Ϣ---------------------------------------------
**��    ��    ��: bsp_SIIC.h
**��    ��    ��: wangyao
**��  ��  ��  ��: 140714
**��  ��  ��  ��: V0.1
**��          ��: 
**---------------------------------------��ʷ�汾��Ϣ-------------------------------------------
**��    ��    ��: 
**��          ��: 
**��          ��: 
**��          ��:
**----------------------------------------------------------------------------------------------
***********************************************************************************************/
#ifndef	__BSP_IIC_H_
#define	__BSP_IIC_H_
/* Includes-----------------------------------------------------------------------------------*/
#include "hsi2c.h"
/* Private define-----------------------------------------------------------------------------*/
/* Private typedef----------------------------------------------------------------------------*/
/* Private macro------------------------------------------------------------------------------*/
/* Private variables--------------------------------------------------------------------------*/
/* Private function prototypes----------------------------------------------------------------*/
/* Private functions--------------------------------------------------------------------------*/
/***********************************************************************************************
* Function		: 
* Description	: I2C����
* Input			: delay  
* Output		: 
* Note(s)		: 
* Contributor	: ��ҫ 2014-12-03
***********************************************************************************************/
#if 0
// iic ��ʼ��
void iic_init(void);
// iic ��ʼ
void iic_start(void);
// iicֹͣ
void iic_stop(void);
// ACK
void iic_ack(void);
// NOACK
void iic_noack(void);
// �ȴ�
void iic_wait_ack(void);
// ����һ���ֽ�
INT8U iic_send_byte(INT8U val);
// ����8λ����
INT8U iic_rec_byte(void);
// ����һ��16λ��ֵ
INT16U iic_rec_2byte();
#endif
/***********************************************************************************************
* Function		: BSP_I2CInit
* Description	: I2C��ʼ������
* Input			: delay  
* Output		: 
* Note(s)		: 
* Contributor	: ��ҫ 2014-12-03
***********************************************************************************************/
INT16U BSP_I2CInit( INT8U instance);
/***********************************************************************************************
* Function		: BSP_I2CWrite
* Description	: I2Cд����
* Input			:   
* Output		: 
* Note(s)		: 
* Contributor	: ��ҫ 2014-12-03
***********************************************************************************************/
INT16U BSP_I2CWrite(INT8U instance,INT16U slaveAdd,INT8U *buffer, INT8U  bufLen);
/***********************************************************************************************
* Function		: BSP_I2CRead
* Description	: I2C������
* Input			: 
* Output		: 
* Note(s)		: 
* Contributor	: ��ҫ 2014-12-03
***********************************************************************************************/
INT16U BSP_I2CRead(INT8U busNum,INT16U	slaveAddr,INT8U	*buffer,INT8U	bufLen,INT8U	*pDataRead);
#endif	//__BSP_SIIC_H_
/************************(C)COPYRIGHT 2014 �㽭��̩*****END OF FILE****************************/