/******************************************************************************/
/* File   : RTE_Stub_Ccm.cpp                                                  */
/*                                                                            */
/* Author : Raajnaag HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright � 1982 Raajnaag HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/RaajnaagHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Rte_CtApHufTpmsSWC_Type.h"
#include "Rte_CtApHufTpmsSWC.h"
#include "RTE_Stub_CcmX.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
uint16 u16CCWritePos;
uint16 u16CCReadPos;

ImpTypeRecCcm_DISP_CC_BYPA_00 tCC_BYPA_00[CC_DATA_QUEUE_LENGTH];

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Send_Ccm( P2CONST(ImpTypeRecCcm_DISP_CC_BYPA_00, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) data)
{

   static bool bLockPosition = false;
   uint16 queueFillStatus = 0;
   uint8 ucRet;

   if(0xffff == u16CCWritePos){
      u16CCWritePos = 0;
    bLockPosition = false;
    queueFillStatus = 1;
   }
   else{
      if(((u16CCWritePos + 1) % CC_DATA_QUEUE_LENGTH) == u16CCReadPos){

      bLockPosition = true;
      queueFillStatus = 10;
      }
      else{

      u16CCWritePos++;
      u16CCWritePos %= CC_DATA_QUEUE_LENGTH;
      bLockPosition = false;

      if(u16CCWritePos > u16CCReadPos){
        queueFillStatus = u16CCWritePos - u16CCReadPos;
      }
      else{
        queueFillStatus = 10 - (u16CCReadPos - u16CCWritePos);
      }
      }
   }

   if(false == bLockPosition){

    tCC_BYPA_00[u16CCWritePos] = *data;
   }

   if(queueFillStatus > 1){

      ucRet = RTE_E_OK;
   }
   else{
      ucRet = RTE_E_OK;
   }

   return ucRet;
}

uint8 Stub_GetCcmData( ImpTypeRecCcm_DISP_CC_BYPA_00 *ptOutputData)
{
   uint8 ucReturnValue = 0xFF;
   bool bReadQueueData = true;

   if(u16CCWritePos != 0xFFFF){
      if(u16CCReadPos == 0xFFFF){
      u16CCReadPos = 0;
      }
      else{
      if(u16CCReadPos == u16CCWritePos){

        bReadQueueData = false;
      }
      else{

        u16CCReadPos++;
        u16CCReadPos %= CC_DATA_QUEUE_LENGTH;
      }
      }

      if(bReadQueueData == true){
      *ptOutputData = tCC_BYPA_00[u16CCReadPos];
      ucReturnValue = 0x00;
      }
   }
   return ucReturnValue;

}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

