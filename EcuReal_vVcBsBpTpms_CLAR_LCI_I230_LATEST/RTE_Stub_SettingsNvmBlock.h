#ifndef __RTE_STUB_SETTINGS_NVM_BLOCK_H
#define __RTE_STUB_SETTINGS_NVM_BLOCK_H
/******************************************************************************/
/* File   : RTE_Stub_SettingsNvmBlock.h                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Rte_CtApHufTpmsSWC_Type.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   uint16  numericUpDownRDCiCyclicTask;
   boolean checkBoxSendCyclicAliveTelegrams;
   uint16  OutputTimerInterval;
   uint16  FrTimerInterval;
   uint16  ABSRecEvSimInterval;
   uint16  RDCRecEvSimInterval;
   uint16  CanMsgTimerInterval;
   boolean checkBoxUseHufTelegrams;
   boolean checkBoxUseSchraderTelegrams;
   boolean checkBoxUseContiTelegrams;
   boolean checkATempInvalid;
   boolean checkATempMissing;
   boolean checkAipInvalid;
   boolean checkBoxAipInit;
   boolean checkAipMissing;
   boolean checkVVehInvalid;
   boolean checkVVehQualifier;
   boolean checkVVehMissing;
   boolean checkVVehAlive;
   boolean checkMileKmInvalid;
   boolean checkWmomInvalid;
   boolean checkWmomMissing;
   boolean checkRelativzeitInvalid;
   boolean checkRelativzeitMissing;
   boolean checkUhrzeitDatumInvalid;
   boolean checkUhrzeitDatumMissing;
   boolean checkUnitsInvalid;
   boolean checkUnitsMissing;
   boolean checkConVehInvalid;
   boolean checkConVehAlive;
   boolean checkConVehMissing;
   boolean checkConVehQualifier;
   boolean radioButtonFZZSTDFree;
   boolean radioButtonFZZSTDLocked;
   boolean radioButtonFZZSTDInvalid;
   boolean checkBoxFRBusOff;
   boolean checkFRBusState;
   boolean checkBoxGNSSPositionAltitudeInvalid;
   boolean checkBoxGNSSErrorAltitudeMetersInvalid;
   boolean checkBoxNMEARawData2Missing;
}tRteStubSettingsDataDecl;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern tRteStubSettingsDataDecl tRteStubSettingsDataRAM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void NVM_ReadRteStubSettings       (void);
extern void NVM_WriteRteStubSettings      (void);
extern void NVM_SetDefaultRteStubSettings (void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif

