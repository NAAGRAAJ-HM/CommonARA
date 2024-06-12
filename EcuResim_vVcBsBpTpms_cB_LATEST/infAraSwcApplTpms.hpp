#pragma once
/******************************************************************************/
/* File   : infAraSwcApplTpms.hpp                                             */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define Default_infAraSwcApplTpms_PercentageShiftTRef                                   0 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdHoldOffShortCompensatedTemperature 0 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdRawNoHoldOff                       0 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdPreCompensatedTemperature          0 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdPreRaw                             0 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdNotificationSupPark                0 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdNotificationSupParkRaw             0 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdWarnSupParkCompensatedTemperature  0 /* %ge */
#define Default_infAraSwcApplTpms_PercentageThresholdWarnSupParkRaw                     0 /* %ge */
#define Default_infAraSwcApplTpms_PercentageLearnPickup                                 0 /* %ge */
#define Default_infAraSwcApplTpms_PressureAtmospheric                                1013 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureDeltaPLR                                      0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_Pressure_dp_to_i_min                                  0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureRcpCorrectedMax                               0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureRcpMinAxleFront                               0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureRcpMinAxleRear                                0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureThresholdPanne                                0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureRangeMaxInit                                  0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureOffsetTolerance                               0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureOffsetToleranceRaw                            0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureThresholdLossMobilitySupPark                  0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureTolSupParkRaw                                 0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureTolSupParkCompensatedTemperature              0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureInitAxleFront                                 0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_PressureInitAxleRear                                  0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_OffsetPressureSpeedCcmAxleFront                       0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_OffsetPressureSpeedCcmAxleRear                        0 /* mbar (hPa) */
#define Default_infAraSwcApplTpms_TemperatureAmbientPrewarn_Disabled                 0xFE /* K */
#define Default_infAraSwcApplTpms_TemperatureTrefThresholdDown                          0 /* DegC */
#define Default_infAraSwcApplTpms_TemperatureTrefThresholdUp                            0 /* DegC */
#define Default_infAraSwcApplTpms_TemperatureAir                                       20 /* DegC */
#define Default_infAraSwcApplTpms_SpeedThresholdCcm                                     0 /* KmpH */
#define Default_infAraSwcApplTpms_SpeedHysterisisCcm                                    0 /* KmpH */
#define Default_infAraSwcApplTpms_DateDisplayYear                                       0 /* year */
#define Default_infAraSwcApplTpms_DateDisplayMonth                                      0 /* month */
#define Default_infAraSwcApplTpms_DateTrefHoldOffDown                                   0 /* day */
#define Default_infAraSwcApplTpms_DateTrefHoldOffUp                                     0 /* day */
#define Default_infAraSwcApplTpms_DateDisplayDay                                        0 /* day */
#define Default_infAraSwcApplTpms_TimeTrefConstFiltDown                                 0 /* hour */
#define Default_infAraSwcApplTpms_TimeTrefConstFiltUp                                   0 /* hour */
#define Default_infAraSwcApplTpms_TimeDisplayHour                                       0 /* hour */
#define Default_infAraSwcApplTpms_TimeHoldOffCooling                                    0 /* min */
#define Default_infAraSwcApplTpms_TimeHoldOffLong_Disabled                           0x13 /* min */
#define Default_infAraSwcApplTpms_TimeCorrelationMax                                    0 /* min */
#define Default_infAraSwcApplTpms_TimeHoldOffShort_Disabled_US_China                 0x08 /* min */
#define Default_infAraSwcApplTpms_TimeoutHoldOffPrewarn                                 0 /* min */
#define Default_infAraSwcApplTpms_TimeMinCoolTyreX                                      0 /* min */
#define Default_infAraSwcApplTpms_TimeDisplayMin                                        0 /* min */
#define Default_infAraSwcApplTpms_TimeoutDispCfg                                        0 /* s */
#define Default_infAraSwcApplTpms_TimeHoldOffCcm                                        0 /* s */
#define Default_infAraSwcApplTpms_TimeDisplaySec                                        0 /* s */
#define Default_infAraSwcApplTpms_Altitude                                            0.0 /* m */
#define Default_infAraSwcApplTpms_ErrorAltitude                                       0.0 /* m */

#define Default_infAraSwcApplTpms_stParameterCodingTpms {                                                                   \
      infAraSwcApplTpms_eEnableResetDisplay_Disabled                                                                        \
   ,  infAraSwcApplTpms_eEnableRcpEco_Disabled                                                                              \
   ,  infAraSwcApplTpms_eEnableRidErfs_Disabled_RFS_and_RID                                                                 \
   ,  infAraSwcApplTpms_eEnableDeflateFast_Disabled                                                                         \
   ,  infAraSwcApplTpms_eEnableThresholdMax_Disabled                                                                        \
   ,  infAraSwcApplTpms_eEnableWarningsLegisPromote_Disabled                                                                \
   ,  infAraSwcApplTpms_eEnablePrewarn_Disabled                                                                             \
   ,  infAraSwcApplTpms_eEnablePrewarnIgnition_Disabled                                                                     \
   ,  infAraSwcApplTpms_eEnableResetPlausi_Disabled                                                                         \
   ,  infAraSwcApplTpms_eEnableSensorForegin_Disabled                                                                       \
   ,  infAraSwcApplTpms_eEnableSyncLocationSensor_Disabled                                                                  \
   ,  infAraSwcApplTpms_eEnableInitStat_Disabled                                                                            \
   ,  infAraSwcApplTpms_eEnablePrewarnNotification_Disabled                                                                 \
   ,  infAraSwcApplTpms_eEnableTRefAdjustmentSeasonal_Disabled                                                              \
   ,  infAraSwcApplTpms_eEnableMonitoringParkenFbd_Disabled                                                                 \
   ,  infAraSwcApplTpms_eEnableSpeedCcm_Disabled                                                                            \
   ,  infAraSwcApplTpms_eStateTpms_INVALID                                                                                  \
   ,  infAraSwcApplTpms_eConditionLoadDefault_INVALID                                                                       \
   ,  infAraSwcApplTpms_eMenuSelectDefault_Manual_RFS                                                                       \
   ,  infAraSwcApplTpms_eSourcePlacardErfs_INVALID                                                                          \
   ,  infAraSwcApplTpms_eNumberDetectPrewarn_TiresTwoOrMore                                                                 \
   ,  infAraSwcApplTpms_eMarketLegislation_Invalid                                                                          \
   ,  infAraSwcApplTpms_eCfgSupParkExt_INVALID                                                                              \
   ,  infAraSwcApplTpms_eStrategyLearnTimeout_B                                                                             \
   ,  infAraSwcApplTpms_eBandMarginCoinPal_INVALID                                                                          \
   ,  infAraSwcApplTpms_eSwitchDebug_Disabled                                                                               \
   ,  infAraSwcApplTpms_eSwitchDebug_Disabled                                                                               \
   ,  infAraSwcApplTpms_eSwitchDebug_Disabled                                                                               \
   ,  infAraSwcApplTpms_eSwitchDebug_Disabled                                                                               \
   ,  CompuMethod_Percentage_u8           (Default_infAraSwcApplTpms_PercentageShiftTRef)                                   \
   ,  CompuMethod_Percentage_u8           (Default_infAraSwcApplTpms_PercentageThresholdHoldOffShortCompensatedTemperature) \
   ,  CompuMethod_Percentage_u8           (Default_infAraSwcApplTpms_PercentageThresholdRawNoHoldOff)                       \
   ,  CompuMethod_Percentage_u8           (Default_infAraSwcApplTpms_PercentageThresholdPreCompensatedTemperature)          \
   ,  CompuMethod_Percentage_u8           (Default_infAraSwcApplTpms_PercentageThresholdPreRaw)                             \
   ,  CompuMethod_Percentage_u8           (Default_infAraSwcApplTpms_PercentageThresholdNotificationSupPark)                \
   ,  CompuMethod_Percentage_u8           (Default_infAraSwcApplTpms_PercentageThresholdNotificationSupParkRaw)             \
   ,  CompuMethod_Percentage_u8           (Default_infAraSwcApplTpms_PercentageThresholdWarnSupParkCompensatedTemperature)  \
   ,  CompuMethod_Percentage_u8           (Default_infAraSwcApplTpms_PercentageThresholdWarnSupParkRaw)                     \
   ,  CompuMethod_Percentage_u8           (Default_infAraSwcApplTpms_PercentageLearnPickup)                                 \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureDeltaPLR)                                      \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_Pressure_dp_to_i_min)                                  \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureRcpCorrectedMax)                               \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureRcpMinAxleFront)                               \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureRcpMinAxleRear)                                \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureThresholdPanne)                                \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureRangeMaxInit)                                  \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureOffsetTolerance)                               \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureOffsetToleranceRaw)                            \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureThresholdLossMobilitySupPark)                  \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureTolSupParkRaw)                                 \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureTolSupParkCompensatedTemperature)              \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureInitAxleFront)                                 \
   ,  CompuMethod_Pressure_mbar_u16       (Default_infAraSwcApplTpms_PressureInitAxleRear)                                  \
   ,  CompuMethod_OffsetPressure_mbar_s16 (Default_infAraSwcApplTpms_OffsetPressureSpeedCcmAxleFront)                       \
   ,  CompuMethod_OffsetPressure_mbar_s16 (Default_infAraSwcApplTpms_OffsetPressureSpeedCcmAxleRear)                        \
   ,  CompuMethod_Speed_KmpH_u16          (Default_infAraSwcApplTpms_SpeedThresholdCcm)                                     \
   ,  CompuMethod_Speed_KmpH_u8           (Default_infAraSwcApplTpms_SpeedHysterisisCcm)                                    \
   ,  CompuMethod_Temperature_K_u16       (Default_infAraSwcApplTpms_TemperatureAmbientPrewarn_Disabled)                    \
   ,  CompuMethod_Temperature_DegC_u8     (Default_infAraSwcApplTpms_TemperatureTrefThresholdDown)                          \
   ,  CompuMethod_Temperature_DegC_u8     (Default_infAraSwcApplTpms_TemperatureTrefThresholdUp)                            \
   ,  CompuMethod_Date_day_u8             (Default_infAraSwcApplTpms_DateTrefHoldOffDown)                                   \
   ,  CompuMethod_Date_day_u8             (Default_infAraSwcApplTpms_DateTrefHoldOffUp)                                     \
   ,  CompuMethod_Time_hour_u8            (Default_infAraSwcApplTpms_TimeTrefConstFiltDown)                                 \
   ,  CompuMethod_Time_hour_u8            (Default_infAraSwcApplTpms_TimeTrefConstFiltUp)                                   \
   ,  CompuMethod_Time_min_u8             (Default_infAraSwcApplTpms_TimeHoldOffCooling)                                    \
   ,  CompuMethod_Time_min_u8             (Default_infAraSwcApplTpms_TimeHoldOffLong_Disabled)                              \
   ,  CompuMethod_Time_min_u8             (Default_infAraSwcApplTpms_TimeCorrelationMax)                                    \
   ,  CompuMethod_Time_min_u8             (Default_infAraSwcApplTpms_TimeHoldOffShort_Disabled_US_China)                    \
   ,  CompuMethod_Time_min_u8             (Default_infAraSwcApplTpms_TimeoutHoldOffPrewarn)                                 \
   ,  CompuMethod_Time_min_u8             (Default_infAraSwcApplTpms_TimeMinCoolTyreX)                                      \
   ,  CompuMethod_Time_s_u8               (Default_infAraSwcApplTpms_TimeoutDispCfg)                                        \
   ,  CompuMethod_Time_s_u8               (Default_infAraSwcApplTpms_TimeHoldOffCcm)                                        \
}

#define Default_infAraSwcApplTpms_stDateAndTime {                                           \
      CompuMethod_Time_hour_u8                 (Default_infAraSwcApplTpms_TimeDisplayHour)  \
   ,  CompuMethod_Time_min_u8                  (Default_infAraSwcApplTpms_TimeDisplayMin)   \
   ,  CompuMethod_Time_s_u8                    (Default_infAraSwcApplTpms_TimeDisplaySec)   \
   ,  CompuMethod_Date_day_u8                  (Default_infAraSwcApplTpms_DateDisplayDay)   \
   ,  CompuMethod_Date_month_u8                (Default_infAraSwcApplTpms_DateDisplayMonth) \
   ,  CompuMethod_Date_year_u16                (Default_infAraSwcApplTpms_DateDisplayYear)  \
}

#define Default_infAraSwcApplTpms_stReceivers {                                                      \
      Default_infAraSwcApplTpms_stParameterCodingTpms                                                \
   ,  {{0}}                                                                                          \
   ,  Default_infAraSwcApplTpms_stDateAndTime                                                        \
   ,  CompuMethod_Distance_m_f32                     (Default_infAraSwcApplTpms_Altitude)            \
   ,  CompuMethod_Distance_m_f32                     (Default_infAraSwcApplTpms_ErrorAltitude)       \
   ,  CompuMethod_Pressure_mbar_u16                  (Default_infAraSwcApplTpms_PressureAtmospheric) \
   ,  infAraSwcApplTpms_eGearVehicle_INITIALISING                                                    \
   ,  infAraSwcApplTpms_eDtcSuppressionNetwork_FALSE                                                 \
   ,  infAraSwcApplTpms_eStatusNetwork_INACTIVE                                                      \
   ,  CompuMethod_Temperature_DegC_s16               (Default_infAraSwcApplTpms_TemperatureAir)      \
   ,  {0}                                                                                            \
   ,  0, 0, 0, 0, {0}                                                                                \
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
#define CfgAra_dSizeReifenEco                                                162 //TBD: Rename and move to correct header

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#define CompuMethod_Percentage_u8(p)           ((Type_System_tPercentage_u8)           (p)) //TBD: Move to System.hpp
#define CompuMethod_Pressure_mbar_u16(p)       ((Type_System_tPressure_mbar_u16)       (p)) //TBD: Move to System.hpp
#define CompuMethod_OffsetPressure_mbar_s16(p) ((Type_System_tOffsetPressure_mbar_s16) (p)) //TBD: Move to System.hpp
#define CompuMethod_Speed_KmpH_u16(p)          ((Type_System_tSpeed_KmpH_u16)          (p)) //TBD: Move to System.hpp
#define CompuMethod_Speed_KmpH_u8(p)           ((Type_System_tSpeed_KmpH_u8)           (p)) //TBD: Move to System.hpp
#define CompuMethod_Temperature_K_u16(p)       ((Type_System_tTemperature_K_u16)       (p)) //TBD: Move to System.hpp
#define CompuMethod_Temperature_DegC_s16(p)    ((Type_System_tTemperature_DegC_s16)    (p)) //TBD: Move to System.hpp
#define CompuMethod_Temperature_DegC_u8(p)     ((Type_System_tTemperature_DegC_u8)     (p)) //TBD: Move to System.hpp
#define CompuMethod_Date_year_u16(p)           ((Type_System_tDate_year_u16)           (p)) //TBD: Move to System.hpp
#define CompuMethod_Date_month_u8(p)           ((Type_System_tDate_month_u8)           (p)) //TBD: Move to System.hpp
#define CompuMethod_Date_day_u8(p)             ((Type_System_tDate_day_u8)             (p)) //TBD: Move to System.hpp
#define CompuMethod_Time_hour_u8(p)            ((Type_System_tTime_hour_u8)            (p)) //TBD: Move to System.hpp
#define CompuMethod_Time_min_u8(p)             ((Type_System_tTime_min_u8)             (p)) //TBD: Move to System.hpp
#define CompuMethod_Time_s_u8(p)               ((Type_System_tTime_s_u8)               (p)) //TBD: Move to System.hpp
#define CompuMethod_Distance_m_f32(p)          ((Type_System_tDistance_m_f32)          (p)) //TBD: Move to System.hpp

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef uint8   Type_System_tPercentage_u8;           //TBD: Move to System.hpp
typedef uint16  Type_System_tPressure_mbar_u16;       //TBD: Move to System.hpp
typedef sint16  Type_System_tOffsetPressure_mbar_s16; //TBD: Move to System.hpp
typedef uint16  Type_System_tSpeed_KmpH_u16;          //TBD: Move to System.hpp
typedef uint8   Type_System_tSpeed_KmpH_u8;           //TBD: Move to System.hpp
typedef uint16  Type_System_tTemperature_K_u16;       //TBD: Move to System.hpp
typedef sint16  Type_System_tTemperature_DegC_s16;    //TBD: Move to System.hpp
typedef uint8   Type_System_tTemperature_DegC_u8;     //TBD: Move to System.hpp
typedef uint16  Type_System_tDate_year_u16;           //TBD: Move to System.hpp
typedef uint8   Type_System_tDate_month_u8;           //TBD: Move to System.hpp
typedef uint8   Type_System_tDate_day_u8;             //TBD: Move to System.hpp
typedef uint8   Type_System_tTime_hour_u8;            //TBD: Move to System.hpp
typedef uint8   Type_System_tTime_min_u8;             //TBD: Move to System.hpp
typedef uint8   Type_System_tTime_s_u8;               //TBD: Move to System.hpp
typedef float32 Type_System_tDistance_m_f32;          //TBD: Move to System.hpp

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableResetDisplay_Disabled
   ,  infAraSwcApplTpms_eEnableResetDisplay_Enabled
}Type_infAraSwcApplTpms_eEnableResetDisplay;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableRcpEco_Disabled
   ,  infAraSwcApplTpms_eEnableRcpEco_Enabled
}Type_infAraSwcApplTpms_eEnableRcpEco;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableRidErfs_Disabled_RFS_and_RID
   ,  infAraSwcApplTpms_eEnableRidErfs_RFS_Only
   ,  infAraSwcApplTpms_eEnableRidErfs_RFS_with_RID
}Type_infAraSwcApplTpms_eEnableRidErfs;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableDeflateFast_Disabled
   ,  infAraSwcApplTpms_eEnableDeflateFast_Enabled
}Type_infAraSwcApplTpms_eEnableDeflateFast;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableThresholdMax_Disabled
   ,  infAraSwcApplTpms_eEnableThresholdMax_Enabled
}Type_infAraSwcApplTpms_eEnableThresholdMax;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableWarningsLegisPromote_Disabled
   ,  infAraSwcApplTpms_eEnableWarningsLegisPromote_Enabled
}Type_infAraSwcApplTpms_eEnableWarningsLegisPromote;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnablePrewarn_Disabled
   ,  infAraSwcApplTpms_eEnablePrewarn_Enabled
}Type_infAraSwcApplTpms_eEnablePrewarn;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnablePrewarnIgnition_Disabled
   ,  infAraSwcApplTpms_eEnablePrewarnIgnition_Enabled
}Type_infAraSwcApplTpms_eEnablePrewarnIgnition;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableResetPlausi_Disabled
   ,  infAraSwcApplTpms_eEnableResetPlausi_Enabled
}Type_infAraSwcApplTpms_eEnableResetPlausi;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableSensorForegin_Disabled
   ,  infAraSwcApplTpms_eEnableSensorForegin_Enabled
}Type_infAraSwcApplTpms_eEnableSensorForegin;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableSyncLocationSensor_Disabled
   ,  infAraSwcApplTpms_eEnableSyncLocationSensor_Enabled
}Type_infAraSwcApplTpms_eEnableSyncLocationSensor;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableInitStat_Disabled
   ,  infAraSwcApplTpms_eEnableInitStat_Enabled
}Type_infAraSwcApplTpms_eEnableInitStat;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnablePrewarnNotification_Disabled
   ,  infAraSwcApplTpms_eEnablePrewarnNotification_Enabled
}Type_infAraSwcApplTpms_eEnablePrewarnNotification;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableTRefAdjustmentSeasonal_Disabled
   ,  infAraSwcApplTpms_eEnableTRefAdjustmentSeasonal_Enabled
}Type_infAraSwcApplTpms_eEnableTRefAdjustmentSeasonal;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableMonitoringParkenFbd_Disabled
   ,  infAraSwcApplTpms_eEnableMonitoringParkenFbd_Enabled
}Type_infAraSwcApplTpms_eEnableMonitoringParkenFbd;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eEnableSpeedCcm_Disabled
   ,  infAraSwcApplTpms_eEnableSpeedCcm_Enabled
}Type_infAraSwcApplTpms_eEnableSpeedCcm;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eQualitySignal_VALID
   ,  infAraSwcApplTpms_eQualitySignal_INVALID
   ,  infAraSwcApplTpms_eQualitySignal_ERROR
}Type_infAraSwcApplTpms_eQualitySignal;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eStateTpms_ACTIVE_NONE
   ,  infAraSwcApplTpms_eStateTpms_ACTIVE_RPA
   ,  infAraSwcApplTpms_eStateTpms_ACTIVE_TPMS
   ,  infAraSwcApplTpms_eStateTpms_INVALID
}Type_infAraSwcApplTpms_eStateTpms;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eConditionLoadDefault_Comfort_Partial
   ,  infAraSwcApplTpms_eConditionLoadDefault_Vmax_Full
   ,  infAraSwcApplTpms_eConditionLoadDefault_Comfort_Vmax_Eco
   ,  infAraSwcApplTpms_eConditionLoadDefault_INVALID = 0xFF
}Type_infAraSwcApplTpms_eConditionLoadDefault;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eMenuSelectDefault_Manual_RFS
   ,  infAraSwcApplTpms_eMenuSelectDefault_Automatic_RID
}Type_infAraSwcApplTpms_eMenuSelectDefault;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eSourcePlacardErfs_BlockEcoErfsCaf
   ,  infAraSwcApplTpms_eSourcePlacardErfs_JobDiagnostic
   ,  infAraSwcApplTpms_eSourcePlacardErfs_INVALID = 0xFF
}Type_infAraSwcApplTpms_eSourcePlacardErfs;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eNumberDetectPrewarn_TiresTwoOrMore
   ,  infAraSwcApplTpms_eNumberDetectPrewarn_TiresOneAffected
}Type_infAraSwcApplTpms_eNumberDetectPrewarn;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eMarketLegislation_EU
   ,  infAraSwcApplTpms_eMarketLegislation_US
   ,  infAraSwcApplTpms_eMarketLegislation_China
   ,  infAraSwcApplTpms_eMarketLegislation_Japan
   ,  infAraSwcApplTpms_eMarketLegislation_Invalid
}Type_infAraSwcApplTpms_eMarketLegislation;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eCfgSupParkExt_NotifOFF_WarnOFF_MobLossOFF
   ,  infAraSwcApplTpms_eCfgSupParkExt_NotifON_WarnOFF_MobLossOFF
   ,  infAraSwcApplTpms_eCfgSupParkExt_NotifOFF_WarnON_MobLossOFF
   ,  infAraSwcApplTpms_eCfgSupParkExt_NotifON_WarnON_MobLossOFF
   ,  infAraSwcApplTpms_eCfgSupParkExt_NotifOFF_WarnOFF_MobLossON
   ,  infAraSwcApplTpms_eCfgSupParkExt_NotifON_WarnOFF_MobLossON
   ,  infAraSwcApplTpms_eCfgSupParkExt_NotifOFF_WarnON_MobLossON
   ,  infAraSwcApplTpms_eCfgSupParkExt_NotifON_WarnON_MobLossON
   ,  infAraSwcApplTpms_eCfgSupParkExt_Park_Sup_NOT_ACTIVE
   ,  infAraSwcApplTpms_eCfgSupParkExt_INVALID = 0xFF
}Type_infAraSwcApplTpms_eCfgSupParkExt;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eStrategyLearnTimeout_B
   ,  infAraSwcApplTpms_eStrategyLearnTimeout_A
}Type_infAraSwcApplTpms_eStrategyLearnTimeout;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eBandMarginCoinPal_1
   ,  infAraSwcApplTpms_eBandMarginCoinPal_2
   ,  infAraSwcApplTpms_eBandMarginCoinPal_3
   ,  infAraSwcApplTpms_eBandMarginCoinPal_4
   ,  infAraSwcApplTpms_eBandMarginCoinPal_5
   ,  infAraSwcApplTpms_eBandMarginCoinPal_INVALID = 0xFF
}Type_infAraSwcApplTpms_eBandMarginCoinPal;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eSwitchDebug_Disabled
   ,  infAraSwcApplTpms_eSwitchDebug_Enabled
}Type_infAraSwcApplTpms_eSwitchDebug;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eGearVehicle_INITIALISING
   ,  infAraSwcApplTpms_eGearVehicle_PARK    = 2u
   ,  infAraSwcApplTpms_eGearVehicle_FORWARD = 4u
   ,  infAraSwcApplTpms_eGearVehicle_REVERSE = 5u
   ,  infAraSwcApplTpms_eGearVehicle_INVALID = 15u
}Type_infAraSwcApplTpms_eGearVehicle;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eDtcSuppressionNetwork_FALSE
   ,  infAraSwcApplTpms_eDtcSuppressionNetwork_TRUE
}Type_infAraSwcApplTpms_eDtcSuppressionNetwork;

typedef enum __attribute__ ((__packed__)){
      infAraSwcApplTpms_eStatusNetwork_INACTIVE
   ,  infAraSwcApplTpms_eStatusNetwork_ACTIVE
}Type_infAraSwcApplTpms_eStatusNetwork;

typedef struct{
   Type_infAraSwcApplTpms_eEnableResetDisplay           eEnableResetDisplay;
   Type_infAraSwcApplTpms_eEnableRcpEco                 eEnableRcpEco;
   Type_infAraSwcApplTpms_eEnableRidErfs                eEnableRidErfs;
   Type_infAraSwcApplTpms_eEnableDeflateFast            eEnableDeflateFast;
   Type_infAraSwcApplTpms_eEnableThresholdMax           eEnableThresholdMax;
   Type_infAraSwcApplTpms_eEnableWarningsLegisPromote   eEnableWarningsLegisPromote;
   Type_infAraSwcApplTpms_eEnablePrewarn                eEnablePrewarn;
   Type_infAraSwcApplTpms_eEnablePrewarnIgnition        eEnablePrewarnIgnition;
   Type_infAraSwcApplTpms_eEnableResetPlausi            eEnableResetPlausi;
   Type_infAraSwcApplTpms_eEnableSensorForegin          eEnableSensorForegin;
   Type_infAraSwcApplTpms_eEnableSyncLocationSensor     eEnableSyncLocationSensor;
   Type_infAraSwcApplTpms_eEnableInitStat               eEnableInitStat;
   Type_infAraSwcApplTpms_eEnablePrewarnNotification    eEnablePrewarnNotification;
   Type_infAraSwcApplTpms_eEnableTRefAdjustmentSeasonal eEnableTRefAdjustmentSeasonal;
   Type_infAraSwcApplTpms_eEnableMonitoringParkenFbd    eEnableMonitoringParkenFbd;
   Type_infAraSwcApplTpms_eEnableSpeedCcm               eEnableSpeedCcm;
   Type_infAraSwcApplTpms_eStateTpms                    eStateTpms;
   Type_infAraSwcApplTpms_eConditionLoadDefault         eConditionLoadDefault;
   Type_infAraSwcApplTpms_eMenuSelectDefault            eMenuSelectDefault;
   Type_infAraSwcApplTpms_eSourcePlacardErfs            eSourcePlacardErfs;
   Type_infAraSwcApplTpms_eNumberDetectPrewarn          eNumberDetectPrewarn;
   Type_infAraSwcApplTpms_eMarketLegislation            eMarketLegislation;
   Type_infAraSwcApplTpms_eCfgSupParkExt                eCfgSupParkExt;
   Type_infAraSwcApplTpms_eStrategyLearnTimeout         eStrategyLearnTimeout;
   Type_infAraSwcApplTpms_eBandMarginCoinPal            eBandMarginCoinPal;
   Type_infAraSwcApplTpms_eSwitchDebug                  eSwitchDebug_1;
   Type_infAraSwcApplTpms_eSwitchDebug                  eSwitchDebug_2;
   Type_infAraSwcApplTpms_eSwitchDebug                  eSwitchDebug_3;
   Type_infAraSwcApplTpms_eSwitchDebug                  eSwitchDebug_4;
   Type_System_tPercentage_u8                           tPercentageShiftTRef;
   Type_System_tPercentage_u8                           tPercentageThresholdHoldOffShortCompensatedTemperature;
   Type_System_tPercentage_u8                           tPercentageThresholdRawNoHoldOff;
   Type_System_tPercentage_u8                           tPercentageThresholdPreCompensatedTemperature;
   Type_System_tPercentage_u8                           tPercentageThresholdPreRaw;
   Type_System_tPercentage_u8                           tPercentageThresholdNotificationSupPark;
   Type_System_tPercentage_u8                           tPercentageThresholdNotificationSupParkRaw;
   Type_System_tPercentage_u8                           tPercentageThresholdWarnSupParkCompensatedTemperature;
   Type_System_tPercentage_u8                           tPercentageThresholdWarnSupParkRaw;
   Type_System_tPercentage_u8                           tPercentageLearnPickup;
   Type_System_tPressure_mbar_u16                       tPressureDeltaPLR;
   Type_System_tPressure_mbar_u16                       tPressure_dp_to_i_min;
   Type_System_tPressure_mbar_u16                       tPressureRcpCorrectedMax;
   Type_System_tPressure_mbar_u16                       tPressureRcpMinAxleFront;
   Type_System_tPressure_mbar_u16                       tPressureRcpMinAxleRear;
   Type_System_tPressure_mbar_u16                       tPressureThresholdPanne;
   Type_System_tPressure_mbar_u16                       tPressureRangeMaxInit;
   Type_System_tPressure_mbar_u16                       tPressureOffsetTolerance;
   Type_System_tPressure_mbar_u16                       tPressureOffsetToleranceRaw;
   Type_System_tPressure_mbar_u16                       tPressureThresholdLossMobilitySupPark;
   Type_System_tPressure_mbar_u16                       tPressureTolSupParkRaw;
   Type_System_tPressure_mbar_u16                       tPressureTolSupParkCompensatedTemperature;
   Type_System_tPressure_mbar_u16                       tPressureInitAxleFront;
   Type_System_tPressure_mbar_u16                       tPressureInitAxleRear;
   Type_System_tOffsetPressure_mbar_s16                 tPressureOffsetSpeedCcmAxleFront;
   Type_System_tOffsetPressure_mbar_s16                 tPressureOffsetSpeedCcmAxleRear;
   Type_System_tSpeed_KmpH_u16                          tSpeedThresholdCcm;
   Type_System_tSpeed_KmpH_u8                           tSpeedHysterisisCcm;
   Type_System_tTemperature_K_u16                       tTemperatureAmbientPrewarn;
   Type_System_tTemperature_DegC_u8                     tTemperatureTrefThresholdDown;
   Type_System_tTemperature_DegC_u8                     tTemperatureTrefThresholdUp;
   Type_System_tDate_day_u8                             tDateTrefHoldOffDown;
   Type_System_tDate_day_u8                             tDateTrefHoldOffUp;
   Type_System_tTime_hour_u8                            tTimeTrefConstFiltDown;
   Type_System_tTime_hour_u8                            tTimeTrefConstFiltUp;
   Type_System_tTime_min_u8                             tTimeHoldOffCooling;
   Type_System_tTime_min_u8                             tTimeHoldOffLong;
   Type_System_tTime_min_u8                             tTimeCorrelationMax;
   Type_System_tTime_min_u8                             tTimeHoldOffShort;
   Type_System_tTime_min_u8                             tTimeoutHoldOffPrewarn;
   Type_System_tTime_min_u8                             tTimeMinCoolTyreX;
   Type_System_tTime_s_u8                               tTimeoutDispCfg;
   Type_System_tTime_s_u8                               tTimeHoldOffCcm;
}Type_infAraSwcApplTpms_stParameterCodingTpms;

typedef struct{
   uint8 ReifenEco[CfgAra_dSizeReifenEco]; //TBD: Data type
}Type_infAraSwcApplTpms_stCodingErfsCaf;

typedef struct{
   Type_System_tTime_hour_u8  tTimeDisplayHour;
   Type_System_tTime_min_u8   tTimeDisplayMin;
   Type_System_tTime_s_u8     tTimeDisplaySec;
   Type_System_tDate_day_u8   tDateDisplayDay;
   Type_System_tDate_month_u8 tDateDisplayMonth;
   Type_System_tDate_year_u16 tDateDisplayYear;
}Type_infAraSwcApplTpms_stDateAndTime;

typedef uint8 Type_infAraSwcApplTpms_eStateVehicle;
typedef uint8 Type_infAraSwcApplTpms_stAddressesBlockNvM;
typedef uint8 Type_infAraSwcApplTpms_eReqNvM;

typedef struct{
   Type_infAraSwcApplTpms_stParameterCodingTpms  stParameterCodingTpms;
   Type_infAraSwcApplTpms_stCodingErfsCaf        stCodingErfsCaf;
   Type_infAraSwcApplTpms_stDateAndTime          stDateAndTime;
   Type_System_tDistance_m_f32                   tAltitude;
   Type_System_tDistance_m_f32                   tErrorAltitude;
   Type_System_tPressure_mbar_u16                tPressureAtmospheric;
   Type_infAraSwcApplTpms_eGearVehicle           eGearVehicle;
   Type_infAraSwcApplTpms_eDtcSuppressionNetwork eDtcSuppressionNetwork;
   Type_infAraSwcApplTpms_eStatusNetwork         eStatusNetwork;
   Type_System_tTemperature_DegC_s16             tTemperatureAir;

   Type_infAraSwcApplTpms_eStateVehicle          eStateVehicle;
   uint16                                        u16VelocityVehicle;
   uint32                                        u32Odometer;
   uint32                                        u32TimeRelative;
   Type_infAraSwcApplTpms_stAddressesBlockNvM    stAddressesBlockNvM;
   Type_infAraSwcApplTpms_eReqNvM                aeListReqNvM[CfgAra_dSizeReqNvM];
   Type_infAraSwcApplTpms_eQualitySignal         eQualitySignalStateVehicle;
   Type_infAraSwcApplTpms_eQualitySignal         eQualitySignalVelocityVehicle;
   Type_infAraSwcApplTpms_eQualitySignal         eQualitySignalOdometer;
   Type_infAraSwcApplTpms_eQualitySignal         eQualitySignalTemperatureAir;
   Type_infAraSwcApplTpms_eQualitySignal         eQualitySignalDateAndTime;
   Type_infAraSwcApplTpms_eQualitySignal         eQualitySignalPressureAtmospheric;
   Type_infAraSwcApplTpms_eQualitySignal         eQualitySignalTimeRelative;
   Type_infAraSwcApplTpms_eQualitySignal         eQualitySignalAltitude;
   Type_infAraSwcApplTpms_eQualitySignal         eQualitySignalGearVehicle;
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

