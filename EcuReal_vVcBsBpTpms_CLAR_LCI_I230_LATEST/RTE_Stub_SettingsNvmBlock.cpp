/******************************************************************************/
/* File   : RTE_Stub_SettingsNvmBlock.cpp                                     */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "RTE_Stub_SettingsNvmBlock.h"
#include <stdio.h>

#ifdef _EcuVirtual
#include "EcuVirtual_stdio.h"
#else
#endif

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
static const tRteStubSettingsDataDecl tRteStubSettingsDataROM = {
      10
   ,  true
   ,  10
   ,  100
   ,  10
   ,  7
   ,  10
   ,  true
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  false
   ,  true
   ,  false
   ,  false
   ,  true
   ,  true
   ,  false
   ,  false
   ,  false
};

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
tRteStubSettingsDataDecl tRteStubSettingsDataRAM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
#ifdef __cplusplus
   extern "C"
  {
#endif
/* C linkage functions - NONE */
#ifdef __cplusplus
   }
#endif

void NVM_ReadRteStubSettings(void){
#ifdef _EcuVirtual
   FILE* fStream;
   const char filename[] = "RteStubSettings.txt";
   const char mode[] = "rb";
   if(0 == fopen_s(&fStream, filename, mode)){
      fread(&tRteStubSettingsDataRAM, sizeof(uint8), sizeof(tRteStubSettingsDataRAM), fStream);
      fclose(fStream);
   }
   else{
      tRteStubSettingsDataRAM = tRteStubSettingsDataROM;
   }
#else
#endif
}

void NVM_WriteRteStubSettings(void){
#ifdef _EcuVirtual
   FILE* fStream;
   const char filename[] = "RteStubSettings.txt";
   const char mode[] = "wb";
   if(0 == fopen_s(&fStream, filename, mode)){
      fwrite((uint8*) &tRteStubSettingsDataRAM, sizeof(uint8), sizeof(tRteStubSettingsDataRAM), fStream);
      fclose(fStream);
   }
#else
#endif
}

void NVM_SetDefaultRteStubSettings(void){
   tRteStubSettingsDataRAM = tRteStubSettingsDataROM;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

