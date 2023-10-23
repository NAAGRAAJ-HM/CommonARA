#pragma once
/******************************************************************************/
/* File   : infAraSwcApplTpms.hpp                                             */
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

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CfgAra_dSizeReqNvM                                                     1 //TBD: Rename and move to correct header

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef uint8 Dtms_nvm_block_ids_et; //TBD: Move to NvM_Types.hpp

typedef uint8 Type_infAraSwcApplTpms_eStateVehicle;
typedef uint8 Type_infAraSwcApplTpms_stDateAndTime;
typedef uint8 Type_infAraSwcApplTpms_eGearVehicle;
typedef uint8 Type_infAraSwcApplTpms_eStatusNetwork;
typedef uint8 Type_infAraSwcApplTpms_stParameterCodingTpms;
typedef uint8 Type_infAraSwcApplTpms_stCodingErfsCaf;
typedef uint8 Type_infAraSwcApplTpms_stAddressesBlockNvM;
typedef uint8 Type_infAraSwcApplTpms_eReqNvM;
typedef uint8 Type_infAraSwcApplTpms_eQualitySignal;

typedef struct{
   Type_infAraSwcApplTpms_eStateVehicle         eStateVehicle;
   uint16                                       u16VelocityVehicle;
   uint32                                       u32Odometer;
   sint16                                       s16TemperatureAir;
   Type_infAraSwcApplTpms_stDateAndTime         stDateAndTime;
   uint16                                       u16PressureAtmospheric;
   uint32                                       u32TimeRelative;
   float32                                      f32Altitude_Param1; //TBD: Need for 2 param
   float32                                      f32Altitude_Param2; //TBD: Need for 2 param
   Type_infAraSwcApplTpms_eGearVehicle          eGearVehicle;
   Type_infAraSwcApplTpms_eStatusNetwork        eStatusNetwork;
   uint8                                        u8DtcSuppressionNetwork;
   Type_infAraSwcApplTpms_stParameterCodingTpms stParameterCodingTpms;
   Type_infAraSwcApplTpms_stCodingErfsCaf       stCodingErfsCaf;
   Type_infAraSwcApplTpms_stAddressesBlockNvM   stAddressesBlockNvM;
   Type_infAraSwcApplTpms_eReqNvM               aeListReqNvM[CfgAra_dSizeReqNvM];
   Type_infAraSwcApplTpms_eQualitySignal        eQualitySignalStateVehicle;
   Type_infAraSwcApplTpms_eQualitySignal        eQualitySignalVelocityVehicle;
   Type_infAraSwcApplTpms_eQualitySignal        eQualitySignalOdometer;
   Type_infAraSwcApplTpms_eQualitySignal        eQualitySignalTemperatureAir;
   Type_infAraSwcApplTpms_eQualitySignal        eQualitySignalDateAndTime;
   Type_infAraSwcApplTpms_eQualitySignal        eQualitySignalPressureAtmospheric;
   Type_infAraSwcApplTpms_eQualitySignal        eQualitySignalTimeRelative;
   Type_infAraSwcApplTpms_eQualitySignal        eQualitySignalAltitude;
   Type_infAraSwcApplTpms_eQualitySignal        eQualitySignalGearVehicle;
}Type_infAraSwcApplTpms_stReceivers;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

