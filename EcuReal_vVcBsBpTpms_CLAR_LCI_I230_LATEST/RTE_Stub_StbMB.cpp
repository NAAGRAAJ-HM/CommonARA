/******************************************************************************/
/* File   : RTE_Stub_StbMB.cpp                                                */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
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
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
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
#include "RTE_Stub_StbMBX.h"

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
StbMB_SystemTimeType      sysTime;
StbMB_SyncStatusType      sysTimeSyncState = STBM_STATE_NOT_SYNC;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void PutStbMBTime(StbMB_SystemTimeType* data){
   sysTime = *data;
}

void PutStbMBSyncState(StbMB_SyncStatusType* data){
   sysTimeSyncState = *data;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_StbMB_GetAbsoluteTime( P2VAR(StbMB_SystemTimeType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) systemTime){
  *systemTime = sysTime;
   return 0;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_StbMB_GetGlobalTime( P2VAR(StbMB_TickType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ticks){
  *ticks = sysTime.ticks;
   return 0;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_StbMB_GetSyncState( P2VAR(StbMB_SyncStatusType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) syncState){
  *syncState = sysTimeSyncState;
   return 0;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_StbMB_GetTickDuration( P2VAR(uint32, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) tickDuration){
  *tickDuration = sysTime.tickDuration;
   return 0;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

