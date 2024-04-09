/******************************************************************************/
/* File   : RTE_Stub_SettingsNvmBlock.cpp                                     */
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

