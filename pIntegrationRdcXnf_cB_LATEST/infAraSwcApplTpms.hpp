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
#define Default_infAraSwcApplTpms_Altitude                                   0.0 /* m */
#define Default_infAraSwcApplTpms_ErrorAltitude                              0.0 /* m */
#define Default_infAraSwcApplTpms_PressureAtmospheric                       1013 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_TimeHoldOffCooling                           0 /* min */
#define Default_infAraSwcApplTpms_PressureDeltaPLR                             0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_TimeoutDispCfg                               0 /* s */
#define Default_infAraSwcApplTpms_Pressure_dp_to_i_min                         0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_TemperatureAmbientPrewarn_Disabled        0xFE /* K */
#define Default_infAraSwcApplTpms_TimeHoldOffLong_Disabled                  0x13 /* min */
#define Default_infAraSwcApplTpms_PressureRcpCorrectedMax                      0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_TimeCorrelationMax                           0 /* min */
#define Default_infAraSwcApplTpms_PressureRcpMinFa                             0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureRcpMinRa                             0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureThresholdPanne                       0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureRangeMaxInit                         0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_TimeHoldOffShort_Disabled_US_China        0x08 /* min */
#define Default_infAraSwcApplTpms_PressureOffsetTolerance                      0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureOffsetToleranceRaw                   0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_TimeoutHoldOffPrewarn                     0x00 /* min */
#define Default_infAraSwcApplTpms_PercentageShiftTRef                       0x00 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdHoldOffShortTc         0x00 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdRawNoHoldOff           0x00 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdPreTc                  0x00 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdPreRaw                 0x00 /* %ge */
#define Default_infAraSwcApplTpms_TimeMinCoolTyreX                          0x00 /* min */
#define Default_infAraSwcApplTpms_SpeedThresholdCcm                       0x0000 /* KmpH */
#define Default_infAraSwcApplTpms_TimeHoldOffCcm                               0 /* s */

#define CompuMethod_Distance_m(p)                                            (p)
#define CompuMethod_Pressure_mbar(p)                                         (p)
#define CompuMethod_Time_min(p)                                              (p)
#define CompuMethod_Time_s(p)                                                (p)
#define CompuMethod_Temperature_K(p)                                         (p)
#define CompuMethod_Percentage(p)                                            (p)
#define CompuMethod_Speed_KmpH(p)                                            (p)

#define Default_infAraSwcApplTpms_stReceivers {                                                      \
      CompuMethod_Distance_m          (Default_infAraSwcApplTpms_Altitude)                           \
   ,  CompuMethod_Distance_m          (Default_infAraSwcApplTpms_ErrorAltitude)                      \
   ,  CompuMethod_Pressure_mbar       (Default_infAraSwcApplTpms_PressureAtmospheric)                \
   ,  {                                                                                              \
            infAraSwcApplTpms_eStateTpms_INVALID                                                     \
         ,  CompuMethod_Time_min      (Default_infAraSwcApplTpms_TimeHoldOffCooling)                 \
         ,  infAraSwcApplTpms_eConditionLoadDefault_INVALID                                          \
         ,  infAraSwcApplTpms_eMenuSelectDefault_Manual_RFS                                          \
         ,  CompuMethod_Pressure_mbar (Default_infAraSwcApplTpms_PressureDeltaPLR)                   \
         ,  CompuMethod_Time_s        (Default_infAraSwcApplTpms_TimeoutDispCfg)                     \
         ,  infAraSwcApplTpms_eEnableResetDisplay_Disabled                                           \
         ,  CompuMethod_Pressure_mbar (Default_infAraSwcApplTpms_Pressure_dp_to_i_min)               \
         ,  CompuMethod_Temperature_K (Default_infAraSwcApplTpms_TemperatureAmbientPrewarn_Disabled) \
         ,  infAraSwcApplTpms_eEnableRcpEco_Disabled                                                 \
         ,  infAraSwcApplTpms_eEnableRidErfs_Disabled_RFS_and_RID                                    \
         ,  infAraSwcApplTpms_eSourcePlacardErfs_INVALID                                             \
         ,  infAraSwcApplTpms_eEnableDeflateFast_Disabled                                            \
         ,  CompuMethod_Time_min      (Default_infAraSwcApplTpms_TimeHoldOffLong_Disabled)           \
         ,  CompuMethod_Pressure_mbar (Default_infAraSwcApplTpms_PressureRcpCorrectedMax)            \
         ,  CompuMethod_Time_min      (Default_infAraSwcApplTpms_TimeCorrelationMax)                 \
         ,  infAraSwcApplTpms_eEnableThresholdMax_Disabled                                           \
         ,  CompuMethod_Pressure_mbar (Default_infAraSwcApplTpms_PressureRcpMinFa)                   \
         ,  CompuMethod_Pressure_mbar (Default_infAraSwcApplTpms_PressureRcpMinRa)                   \
         ,  infAraSwcApplTpms_eNumberDetectPrewarn_TiresTwoOrMore                                    \
         ,  CompuMethod_Pressure_mbar (Default_infAraSwcApplTpms_PressureThresholdPanne)             \
         ,  infAraSwcApplTpms_eEnableWarningsLegisPromote_Disabled                                   \
         ,  CompuMethod_Pressure_mbar (Default_infAraSwcApplTpms_PressureRangeMaxInit)               \
         ,  infAraSwcApplTpms_eEnablePrewarn_Disabled                                                \
         ,  infAraSwcApplTpms_eEnablePrewarnIgnition_Disabled                                        \
         ,  infAraSwcApplTpms_eEnableResetPlausi_Disabled                                            \
         ,  infAraSwcApplTpms_eEnableSensorForegin_Disabled                                          \
         ,  infAraSwcApplTpms_eEnableSyncLocationSensor_Disabled                                     \
         ,  CompuMethod_Time_min      (Default_infAraSwcApplTpms_TimeHoldOffShort_Disabled_US_China) \
         ,  infAraSwcApplTpms_eEnableInitStat_Disabled                                               \
         ,  CompuMethod_Pressure_mbar (Default_infAraSwcApplTpms_PressureOffsetTolerance)            \
         ,  CompuMethod_Pressure_mbar (Default_infAraSwcApplTpms_PressureOffsetToleranceRaw)         \
         ,  CompuMethod_Time_min      (Default_infAraSwcApplTpms_TimeoutHoldOffPrewarn)              \
         ,  infAraSwcApplTpms_eMarketLegislation_Invalid                                             \
         ,  infAraSwcApplTpms_eEnablePrewarnNc_Disabled                                              \
         ,  infAraSwcApplTpms_eEnableTRefAdjustmentSeasonal_Disabled                                 \
         ,  CompuMethod_Percentage    (Default_infAraSwcApplTpms_PercentageShiftTRef)                \
         ,  infAraSwcApplTpms_eEnableMonitoringParkenFbd_Disabled                                    \
         ,  CompuMethod_Percentage    (Default_infAraSwcApplTpms_PercentageThresholdHoldOffShortTc)  \
         ,  CompuMethod_Percentage    (Default_infAraSwcApplTpms_PercentageThresholdRawNoHoldOff)    \
         ,  CompuMethod_Percentage    (Default_infAraSwcApplTpms_PercentageThresholdPreTc)           \
         ,  CompuMethod_Percentage    (Default_infAraSwcApplTpms_PercentageThresholdPreRaw)          \
         ,  CompuMethod_Time_min      (Default_infAraSwcApplTpms_TimeMinCoolTyreX)                   \
         ,  infAraSwcApplTpms_eEnableSpeedCcm_Disabled                                               \
         ,  CompuMethod_Speed_KmpH    (Default_infAraSwcApplTpms_SpeedThresholdCcm)                  \
         ,  CompuMethod_Time_s        (Default_infAraSwcApplTpms_TimeHoldOffCcm)                     \
      }                                                                                              \
   ,  0, 0, {0}, 0, 0                                                                                \
   ,  0, 0, 0, 0, 0, 0, {0}                                                                          \
   ,  infAraSwcApplTpms_eQualitySignal_INVALID                                                       \
   ,  infAraSwcApplTpms_eQualitySignal_INVALID                                                       \
   ,  infAraSwcApplTpms_eQualitySignal_INVALID                                                       \
   ,  infAraSwcApplTpms_eQualitySignal_INVALID                                                       \
   ,  infAraSwcApplTpms_eQualitySignal_INVALID                                                       \
   ,  infAraSwcApplTpms_eQualitySignal_INVALID                                                       \
   ,  infAraSwcApplTpms_eQualitySignal_INVALID                                                       \
   ,  infAraSwcApplTpms_eQualitySignal_INVALID                                                       \
   ,  infAraSwcApplTpms_eQualitySignal_INVALID                                                       \
}

#define CfgAra_dSizeReqNvM                                                     1 //TBD: Rename and move to correct header

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      infAraSwcApplTpms_eQualitySignal_VALID
   ,  infAraSwcApplTpms_eQualitySignal_INVALID
   ,  infAraSwcApplTpms_eQualitySignal_ERROR
}Type_infAraSwcApplTpms_eQualitySignal;

typedef enum{
      infAraSwcApplTpms_eStateTpms_ACTIVE_NONE
   ,  infAraSwcApplTpms_eStateTpms_ACTIVE_RPA
   ,  infAraSwcApplTpms_eStateTpms_ACTIVE_TPMS
   ,  infAraSwcApplTpms_eStateTpms_INVALID
}Type_infAraSwcApplTpms_eStateTpms;

typedef enum{
      infAraSwcApplTpms_eConditionLoadDefault_Comfort_Partial
   ,  infAraSwcApplTpms_eConditionLoadDefault_Vmax_Full
   ,  infAraSwcApplTpms_eConditionLoadDefault_Comfort_Vmax_Eco
   ,  infAraSwcApplTpms_eConditionLoadDefault_INVALID = 0xFF
}Type_infAraSwcApplTpms_eConditionLoadDefault;

typedef enum{
      infAraSwcApplTpms_eMenuSelectDefault_Manual_RFS
   ,  infAraSwcApplTpms_eMenuSelectDefault_Automatic_RID
}Type_infAraSwcApplTpms_eMenuSelectDefault;

typedef enum{
      infAraSwcApplTpms_eEnableResetDisplay_Disabled
   ,  infAraSwcApplTpms_eEnableResetDisplay_Enabled
}Type_infAraSwcApplTpms_eEnableResetDisplay;

typedef enum{
      infAraSwcApplTpms_eEnableRcpEco_Disabled
   ,  infAraSwcApplTpms_eEnableRcpEco_Enabled
}Type_infAraSwcApplTpms_eEnableRcpEco;

typedef enum{
      infAraSwcApplTpms_eEnableRidErfs_Disabled_RFS_and_RID
   ,  infAraSwcApplTpms_eEnableRidErfs_RFS_Only
   ,  infAraSwcApplTpms_eEnableRidErfs_RFS_with_RID
}Type_infAraSwcApplTpms_eEnableRidErfs;

typedef enum{
      infAraSwcApplTpms_eSourcePlacardErfs_BlockEcoErfsCaf
   ,  infAraSwcApplTpms_eSourcePlacardErfs_JobDiagnostic
   ,  infAraSwcApplTpms_eSourcePlacardErfs_INVALID = 0xFF
}Type_infAraSwcApplTpms_eSourcePlacardErfs;

typedef enum{
      infAraSwcApplTpms_eEnableDeflateFast_Disabled
   ,  infAraSwcApplTpms_eEnableDeflateFast_Enabled
}Type_infAraSwcApplTpms_eEnableDeflateFast;

typedef enum{
      infAraSwcApplTpms_eEnableThresholdMax_Disabled
   ,  infAraSwcApplTpms_eEnableThresholdMax_Enabled
}Type_infAraSwcApplTpms_eEnableThresholdMax;

typedef enum{
      infAraSwcApplTpms_eNumberDetectPrewarn_TiresTwoOrMore
   ,  infAraSwcApplTpms_eNumberDetectPrewarn_TiresOneAffected
}Type_infAraSwcApplTpms_eNumberDetectPrewarn;

typedef enum{
      infAraSwcApplTpms_eEnableWarningsLegisPromote_Disabled
   ,  infAraSwcApplTpms_eEnableWarningsLegisPromote_Enabled
}Type_infAraSwcApplTpms_eEnableWarningsLegisPromote;

typedef enum{
      infAraSwcApplTpms_eEnablePrewarn_Disabled
   ,  infAraSwcApplTpms_eEnablePrewarn_Enabled
}Type_infAraSwcApplTpms_eEnablePrewarn;

typedef enum{
      infAraSwcApplTpms_eEnablePrewarnIgnition_Disabled
   ,  infAraSwcApplTpms_eEnablePrewarnIgnition_Enabled
}Type_infAraSwcApplTpms_eEnablePrewarnIgnition;

typedef enum{
      infAraSwcApplTpms_eEnableResetPlausi_Disabled
   ,  infAraSwcApplTpms_eEnableResetPlausi_Enabled
}Type_infAraSwcApplTpms_eEnableResetPlausi;

typedef enum{
      infAraSwcApplTpms_eEnableSensorForegin_Disabled
   ,  infAraSwcApplTpms_eEnableSensorForegin_Enabled
}Type_infAraSwcApplTpms_eEnableSensorForegin;

typedef enum{
      infAraSwcApplTpms_eEnableSyncLocationSensor_Disabled
   ,  infAraSwcApplTpms_eEnableSyncLocationSensor_Enabled
}Type_infAraSwcApplTpms_eEnableSyncLocationSensor;

typedef enum{
      infAraSwcApplTpms_eEnableInitStat_Disabled
   ,  infAraSwcApplTpms_eEnableInitStat_Enabled
}Type_infAraSwcApplTpms_eEnableInitStat;

typedef enum{
      infAraSwcApplTpms_eMarketLegislation_EU
   ,  infAraSwcApplTpms_eMarketLegislation_US
   ,  infAraSwcApplTpms_eMarketLegislation_China
   ,  infAraSwcApplTpms_eMarketLegislation_Japan
   ,  infAraSwcApplTpms_eMarketLegislation_Invalid
}Type_infAraSwcApplTpms_eMarketLegislation;

typedef enum{
      infAraSwcApplTpms_eEnablePrewarnNc_Disabled
   ,  infAraSwcApplTpms_eEnablePrewarnNc_Enabled
}Type_infAraSwcApplTpms_eEnablePrewarnNc;

typedef enum{
      infAraSwcApplTpms_eEnableTRefAdjustmentSeasonal_Disabled
   ,  infAraSwcApplTpms_eEnableTRefAdjustmentSeasonal_Enabled
}Type_infAraSwcApplTpms_eEnableTRefAdjustmentSeasonal;

typedef enum{
      infAraSwcApplTpms_eEnableMonitoringParkenFbd_Disabled
   ,  infAraSwcApplTpms_eEnableMonitoringParkenFbd_Enabled
}Type_infAraSwcApplTpms_eEnableMonitoringParkenFbd;

typedef enum{
      infAraSwcApplTpms_eEnableSpeedCcm_Disabled
   ,  infAraSwcApplTpms_eEnableSpeedCcm_Enabled
}Type_infAraSwcApplTpms_eEnableSpeedCcm;

typedef float32 Type_System_tDistance_m_f32;    //TBD: Move to System.hpp
typedef uint16  Type_System_tPressure_mbar_u16; //TBD: Move to System.hpp
typedef uint8   Type_System_tTime_min_u8;       //TBD: Move to System.hpp
typedef uint8   Type_System_tTime_s_u8;         //TBD: Move to System.hpp
typedef uint16  Type_System_tTemperature_K_u16; //TBD: Move to System.hpp
typedef uint16  Type_System_tPercentage_u8;     //TBD: Move to System.hpp
typedef uint16  Type_System_tSpeed_KmpH_u16;    //TBD: Move to System.hpp

typedef struct{
   Type_infAraSwcApplTpms_eStateTpms                    eStateTpms;
   Type_System_tTime_min_u8                             tTimeHoldOffCooling;
   Type_infAraSwcApplTpms_eConditionLoadDefault         eConditionLoadDefault;
   Type_infAraSwcApplTpms_eMenuSelectDefault            eMenuSelectDefault;
   Type_System_tPressure_mbar_u16                       tPressureDeltaPLR;
   Type_System_tTime_s_u8                               tTimeoutDispCfg;
   Type_infAraSwcApplTpms_eEnableResetDisplay           eEnableResetDisplay;
   Type_System_tPressure_mbar_u16                       tPressure_dp_to_i_min;
   Type_System_tTemperature_K_u16                       tTemperatureAmbientPrewarn;
   Type_infAraSwcApplTpms_eEnableRcpEco                 eEnableRcpEco;
   Type_infAraSwcApplTpms_eEnableRidErfs                eEnableRidErfs;
   Type_infAraSwcApplTpms_eSourcePlacardErfs            eSourcePlacardErfs;
   Type_infAraSwcApplTpms_eEnableDeflateFast            eEnableDeflateFast;
   Type_System_tTime_min_u8                             tTimeHoldOffLong;
   Type_System_tPressure_mbar_u16                       tPressureRcpCorrectedMax;
   Type_System_tTime_min_u8                             tTimeCorrelationMax;
   Type_infAraSwcApplTpms_eEnableThresholdMax           eEnableThresholdMax;
   Type_System_tPressure_mbar_u16                       tPressureRcpMinFa;
   Type_System_tPressure_mbar_u16                       tPressureRcpMinRa;
   Type_infAraSwcApplTpms_eNumberDetectPrewarn          eNumberDetectPrewarn;
   Type_System_tPressure_mbar_u16                       tPressureThresholdPanne;
   Type_infAraSwcApplTpms_eEnableWarningsLegisPromote   eEnableWarningsLegisPromote;
   Type_System_tPressure_mbar_u16                       tPressureRangeMaxInit;
   Type_infAraSwcApplTpms_eEnablePrewarn                eEnablePrewarn;
   Type_infAraSwcApplTpms_eEnablePrewarnIgnition        eEnablePrewarnIgnition;
   Type_infAraSwcApplTpms_eEnableResetPlausi            eEnableResetPlausi;
   Type_infAraSwcApplTpms_eEnableSensorForegin          eEnableSensorForegin;
   Type_infAraSwcApplTpms_eEnableSyncLocationSensor     eEnableSyncLocationSensor;
   Type_System_tTime_min_u8                             tTimeHoldOffShort;
   Type_infAraSwcApplTpms_eEnableInitStat               eEnableInitStat;
   Type_System_tPressure_mbar_u16                       tPressureOffsetTolerance;
   Type_System_tPressure_mbar_u16                       tPressureOffsetToleranceRaw;
   Type_System_tTime_min_u8                             tTimeoutHoldOffPrewarn;
   Type_infAraSwcApplTpms_eMarketLegislation            eMarketLegislation;
   Type_infAraSwcApplTpms_eEnablePrewarnNc              eEnablePrewarnNc;
   Type_infAraSwcApplTpms_eEnableTRefAdjustmentSeasonal eEnableTRefAdjustmentSeasonal;
   Type_System_tPercentage_u8                           tPercentageShiftTRef;
   Type_infAraSwcApplTpms_eEnableMonitoringParkenFbd    eEnableMonitoringParkenFbd;
   Type_System_tPercentage_u8                           tPercentageThresholdHoldOffShortTc;
   Type_System_tPercentage_u8                           tPercentageThresholdRawNoHoldOff;
   Type_System_tPercentage_u8                           tPercentageThresholdPreTc;
   Type_System_tPercentage_u8                           tPercentageThresholdPreRaw;
   Type_System_tTime_min_u8                             tTimeMinCoolTyreX;
   Type_infAraSwcApplTpms_eEnableSpeedCcm               eEnableSpeedCcm;
   Type_System_tSpeed_KmpH_u16                          tSpeedThresholdCcm;
   Type_System_tTime_s_u8                               tTimeHoldOffCcm;
}Type_infAraSwcApplTpms_stParameterCodingTpms;

typedef uint8   Type_infAraSwcApplTpms_eStateVehicle;
typedef uint8   Type_infAraSwcApplTpms_stDateAndTime;
typedef uint8   Type_infAraSwcApplTpms_eGearVehicle;
typedef uint8   Type_infAraSwcApplTpms_eStatusNetwork;
typedef uint8   Type_infAraSwcApplTpms_stCodingErfsCaf;
typedef uint8   Type_infAraSwcApplTpms_stAddressesBlockNvM;
typedef uint8   Type_infAraSwcApplTpms_eReqNvM;

typedef struct{
   Type_System_tDistance_m_f32                  tAltitude;
   Type_System_tDistance_m_f32                  tErrorAltitude;
   Type_System_tPressure_mbar_u16               tPressureAtmospheric;
   Type_infAraSwcApplTpms_stParameterCodingTpms stParameterCodingTpms;

   Type_infAraSwcApplTpms_eStateVehicle         eStateVehicle;
   uint16                                       u16VelocityVehicle;
   uint32                                       u32Odometer;
   sint16                                       s16TemperatureAir;
   Type_infAraSwcApplTpms_stDateAndTime         stDateAndTime;
   uint32                                       u32TimeRelative;
   Type_infAraSwcApplTpms_eGearVehicle          eGearVehicle;
   Type_infAraSwcApplTpms_eStatusNetwork        eStatusNetwork;
   uint8                                        u8DtcSuppressionNetwork;
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

typedef uint8 Dtms_nvm_block_ids_et; //TBD: Move to NvM_Types.hpp

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

