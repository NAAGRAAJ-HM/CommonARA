/******************************************************************************/
/* File   : RTE_Stub_CalPrm.cpp                                               */
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
#include "RTE_Stub_CalPrmX.h"


#include "RTE_Stub_CalPrmNvmBlock.h"

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
ImpTypeRecCRdciErfsReifenEco       ErfsReifenEcoTyreList = {{0}, 0};
ImpTypeArrayCRdciLearnLocateConfig LearnLocateConfig;
ImpTypeArrayCRdciTrefSeasAdjConfig TrefSeasAdjConfig;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(ImpTypeVal_C_Funktion_ReifenPannenerkennung_aktiv_e, RTE_CODE) RTE_Stub_Prm_C_Funktion_ReifenPannenerkennung_aktiv_e (void){return  NvmDscCodierdatenAllgemein_ReadByte( C_FUNKTION_REIFENPANNENERKENNUNG_AKTIV_BYTE,          C_FUNKTION_REIFENPANNENERKENNUNG_AKTIV_MASK          );}
FUNC(ImpTypeValCRdciTPrewarnNc,                           RTE_CODE) RTE_Stub_Prm_CRdciTPrewarnNc                          (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_T_PREWARN_NC_BYTE,                             C_RDCI_T_PREWARN_NC_MASK                             );}
FUNC(ImpTypeValCRdciMaxThreshold,                         RTE_CODE) RTE_Stub_Prm_CRdciMaxThreshold                        (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_MAX_THRESHOLD_BYTE,                            C_RDCI_MAX_THRESHOLD_MASK                            ) >> 1);}
FUNC(ImpTypeValCRdciPrewarnEnable,                        RTE_CODE) RTE_Stub_Prm_CRdciPrewarnEnable                       (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PREWARN_ENABLE_BYTE,                           C_RDCI_PREWARN_ENABLE_MASK                           ) >> 2);}
FUNC(ImpTypeValCRdciStatInit,                             RTE_CODE) RTE_Stub_Prm_CRdciStatInit                            (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_STAT_INIT_BYTE,                                C_RDCI_STAT_INIT_MASK                                ) >> 3);}
FUNC(ImpTypeValCRdciNumPrewarnDetect,                     RTE_CODE) RTE_Stub_Prm_CRdciNumPrewarnDetect                    (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_NUM_PREWARN_DETECT_BYTE,                       C_RDCI_NUM_PREWARN_DETECT_MASK                       ) >> 4);}
FUNC(ImpTypeValCRdciPrewarnIgnition,                      RTE_CODE) RTE_Stub_Prm_CRdciPrewarnIgnition                     (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PREWARN_IGNITION_BYTE,                         C_RDCI_PREWARN_IGNITION_MASK                         ) >> 5);}
FUNC(ImpTypeValCRdciPanneBefPos,                          RTE_CODE) RTE_Stub_Prm_CRdciPanneBefPos                         (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PANNE_BEF_POS_BYTE,                            C_RDCI_PANNE_BEF_POS_MASK                            ) >> 6);}
FUNC(ImpTypeValCRdciFastDeflateEnable,                    RTE_CODE) RTE_Stub_Prm_CRdciFastDeflateEnable                   (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_FAST_DEFLATE_ENABLE_BYTE,                      C_RDCI_FAST_DEFLATE_ENABLE_MASK                      ) >> 7);}
FUNC(ImpTypeValCRdciTyrIdFiltGw,                          RTE_CODE) RTE_Stub_Prm_CRdciTyrIdFiltGw                         (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_TYR_ID_FILT_GW_BYTE,                           C_RDCI_TYR_ID_FILT_GW_MASK                           );}
FUNC(ImpTypeValCRdciResetPlausi,                          RTE_CODE) RTE_Stub_Prm_CRdciResetPlausi                         (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_RESET_PLAUSI_BYTE,                             C_RDCI_RESET_PLAUSI_MASK                             ) >> 1);}
FUNC(ImpTypeValCRdciTpmsMarket,                           RTE_CODE) RTE_Stub_Prm_CRdciTpmsMarket                          (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_TPMS_MARKET_BYTE,                              C_RDCI_TPMS_MARKET_MASK                              ) >> 2);}
FUNC(ImpTypeValCRdciSensorForeignAkRdk,                   RTE_CODE) RTE_Stub_Prm_CRdciSensorForeignAkRdk                  (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_SENSOR_FOREIGN_AK_RDK_BYTE,                    C_RDCI_SENSOR_FOREIGN_AK_RDK_MASK                    ) >> 5);}
FUNC(ImpTypeValCRdciSensorLocSync,                        RTE_CODE) RTE_Stub_Prm_CRdciSensorLocSync                       (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_SENSOR_LOC_SYNC_BYTE,                          C_RDCI_SENSOR_LOC_SYNC_MASK                          ) >> 6);}
FUNC(ImpTypeValCRdciErfsEnable,                           RTE_CODE) RTE_Stub_Prm_CRdciErfsEnable                          (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_ERFS_ENABLE_BYTE,                              C_RDCI_ERFS_ENABLE_MASK                              ) >> 7);}
FUNC(ImpTypeValCRdciTrefSeasonalAdjustment,               RTE_CODE) RTE_Stub_Prm_CRdciTrefSeasonalAdjustment              (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_TREF_SEASONAL_ADJUSTMENT_ENABLE_BYTE,          C_RDCI_TREF_SEASONAL_ADJUSTMENT_ENABLE_MASK          ) >> 0);}
FUNC(ImpTypeValCRdciDispReset,                            RTE_CODE) RTE_Stub_Prm_CRdciDispReset                           (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_DISP_RESET_BYTE,                               C_RDCI_DISP_RESET_MASK                               ) >> 4);}
FUNC(ImpTypeValCRdciCorHoldOffTime,                       RTE_CODE) RTE_Stub_Prm_CRdciCorHoldOffTime                      (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_COR_HOLD_OFF_TIME_BYTE,                        C_RDCI_COR_HOLD_OFF_TIME_MASK                        ) >> 5);}
FUNC(ImpTypeValCRdciTRefShift,                            RTE_CODE) RTE_Stub_Prm_CRdciTRefShift                           (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_T_REF_SHIFT_BYTE,                              C_RDCI_T_REF_SHIFT_MASK                              );}
FUNC(ImpTypeValCRdciUiaThC,                               RTE_CODE) RTE_Stub_Prm_CRdciUiaThC                              (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_UIA_TH_C_BYTE,                                 C_RDCI_UIA_TH_C_MASK                                 );}
FUNC(ImpTypeValCRdciUiwThC,                               RTE_CODE) RTE_Stub_Prm_CRdciUiwThC                              (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_UIW_TH_C_BYTE,                                 C_RDCI_UIW_TH_C_MASK                                 );}
FUNC(ImpTypeValCRdciUiaThNc,                              RTE_CODE) RTE_Stub_Prm_CRdciUiaThNc                             (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_UIA_TH_NC_BYTE,                                C_RDCI_UIA_TH_NC_MASK                                );}
FUNC(ImpTypeValCRdciUiwThNc,                              RTE_CODE) RTE_Stub_Prm_CRdciUiwThNc                             (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_UIW_TH_NC_BYTE,                                C_RDCI_UIW_TH_NC_MASK                                );}
FUNC(ImpTypeValCRdciPanneTh,                              RTE_CODE) RTE_Stub_Prm_CRdciPanneTh                             (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PANNE_TH_BYTE,                                 C_RDCI_PANNE_TH_MASK                                 );}
FUNC(ImpTypeValCRdciMinRcpFa,                             RTE_CODE) RTE_Stub_Prm_CRdciMinRcpFa                            (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_MIN_RCP_FA_BYTE,                               C_RDCI_MIN_RCP_FA_MASK                               );}
FUNC(ImpTypeValCRdciMinRcpRa,                             RTE_CODE) RTE_Stub_Prm_CRdciMinRcpRa                            (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_MIN_RCP_RA_BYTE,                               C_RDCI_MIN_RCP_RA_MASK                               );}
FUNC(ImpTypeValCRdciDeltaPLR,                             RTE_CODE) RTE_Stub_Prm_CRdciDeltaPLR                            (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_DELTA_P_L_R_BYTE,                              C_RDCI_DELTA_P_L_R_MASK                              );}
FUNC(ImpTypeValCRdciPInitRangeMax,                        RTE_CODE) RTE_Stub_Prm_CRdciPInitRangeMax                       (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_P_INIT_RANGE_MAX_BYTE,                         C_RDCI_P_INIT_RANGE_MAX_MASK                         );}
FUNC(ImpTypeValCRdciTimeoutPrewarn,                       RTE_CODE) RTE_Stub_Prm_CRdciTimeoutPrewarn                      (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_TIMEOUT_PREWARN_BYTE,                          C_RDCI_TIMEOUT_PREWARN_MASK                          );}
FUNC(ImpTypeValCRdciDtAmbPrewarn,                         RTE_CODE) RTE_Stub_Prm_CRdciDtAmbPrewarn                        (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_DT_AMB_PREWARN_BYTE,                           C_RDCI_DT_AMB_PREWARN_MASK                           );}
FUNC(ImpTypeValCRdciDpToIPmin,                            RTE_CODE) RTE_Stub_Prm_CRdciDpToIPmin                           (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_DP_TO_I_PMIN_BYTE,                             C_RDCI_DP_TO_I_PMIN_MASK                             );}
FUNC(ImpTypeValCRdciXminCoolTire,                         RTE_CODE) RTE_Stub_Prm_CRdciXminCoolTire                        (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_XMIN_COOL_TIRE_BYTE,                           C_RDCI_XMIN_COOL_TIRE_MASK                           );}
FUNC(ImpTypeValCRdciMaxCorTime,                           RTE_CODE) RTE_Stub_Prm_CRdciMaxCorTime                          (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_MAX_COR_TIME_BYTE,                             C_RDCI_MAX_COR_TIME_MASK                             );}
FUNC(ImpTypeValCRdciMaxCorRcp,                            RTE_CODE) RTE_Stub_Prm_CRdciMaxCorRcp                           (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_MAX_COR_RCP_BYTE,                              C_RDCI_MAX_COR_RCP_MASK                              );}
FUNC(ImpTypeValCRdciThCTol,                               RTE_CODE) RTE_Stub_Prm_CRdciThCTol                              (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_TH_C_TOL_BYTE,                                 C_RDCI_TH_C_TOL_MASK                                 );}
FUNC(ImpTypeValCRdciThNCTol,                              RTE_CODE) RTE_Stub_Prm_CRdciThNCTol                             (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_TH_NC_TOL_BYTE,                                C_RDCI_TH_NC_TOL_MASK                                ) >> 4);}
FUNC(ImpTypeValCRdciLongHoldTime,                         RTE_CODE) RTE_Stub_Prm_CRdciLongHoldTime                        (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_LONG_HOLD_TIME_BYTE,                           C_RDCI_LONG_HOLD_TIME_MASK                           );}
FUNC(ImpTypeValCRdciShortHoldTime,                        RTE_CODE) RTE_Stub_Prm_CRdciShortHoldTime                       (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_SHORT_HOLD_TIME_BYTE,                          C_RDCI_SHORT_HOLD_TIME_MASK                          ) >> 4);}
FUNC(ImpTypeValCRdciEcoRcpEnable,                         RTE_CODE) RTE_Stub_Prm_CRdciEcoRcpEnable                        (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_ECO_RCP_ENABLE_BYTE,                           C_RDCI_ECO_RCP_ENABLE_MASK                           ) >> 7);}
FUNC(ImpTypeValCRdciDefaultLoadCond,                      RTE_CODE) RTE_Stub_Prm_CRdciDefaultLoadCond                     (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_DEFAULT_LOAD_COND_BYTE,                        C_RDCI_DEFAULT_LOAD_COND_MASK                        ) >> 0);}
FUNC(ImpTypeValCRdciErfsPlacardSource,                    RTE_CODE) RTE_Stub_Prm_CRdciErfsPlacardSource                   (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_ERFS_PLACARD_SOURCE_BYTE,                      C_RDCI_ERFS_PLACARD_SOURCE_MASK                      ) >> 1);}
FUNC(ImpTypeValCRdciDefaultMenuSel,                       RTE_CODE) RTE_Stub_Prm_CRdciDefaultMenuSel                      (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_DEFAULT_MENU_SEL_BYTE,                         C_RDCI_DEFAULT_MENU_SEL_MASK                         ) >> 3);}
FUNC(ImpTypeValCRdciDispConfTimeout,                      RTE_CODE) RTE_Stub_Prm_CRdciDispConfTimeout                     (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_DISP_CONF_TIMEOUT_BYTE,                        C_RDCI_DISP_CONF_TIMEOUT_MASK                        ) >> 4);}
FUNC(ImpTypeValCRdciRidEnable,                            RTE_CODE) RTE_Stub_Prm_CRdciRidEnable                           (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_RID_ENABLE_BYTE,                               C_RDCI_RID_ENABLE_MASK                               ) >> 0);}
FUNC(ImpTypeValCRdciSpeedCcmEnable,                       RTE_CODE) RTE_Stub_Prm_CRdciSpeedCcmEnable                      (void){return (NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_SPEED_CCM_ENABLE_BYTE,                         C_RDCI_SPEED_CCM_ENABLE_MASK                         ) >> 0);}
FUNC(ImpTypeValCRdciSpeedCcmHyst,                         RTE_CODE) RTE_Stub_Prm_CRdciSpeedCcmHyst                        (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_SPEED_CCM_HYST_BYTE,                           C_RDCI_SPEED_CCM_HYST_MASK                           );}
FUNC(ImpTypeValCRdciSpeedCcmTime,                         RTE_CODE) RTE_Stub_Prm_CRdciSpeedCcmTime                        (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_SPEED_CCM_TIME_BYTE,                           C_RDCI_SPEED_CCM_TIME_MASK                           );}
FUNC(ImpTypeValCRdciParkSupExtParkSupConfig,              RTE_CODE) RTE_Stub_Prm_CRdciParkSupExtParkSupConfig             (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PARK_SUP_EXT_PARK_SUP_CONFIG_BYTE,             C_RDCI_PARK_SUP_EXT_PARK_SUP_CONFIG_MASK             );}
FUNC(ImpTypeValCRdciParkSupMobilityLossThresholdValue,    RTE_CODE) RTE_Stub_Prm_CRdciParkSupMobilityLossThresholdValue   (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PARK_SUP_MOBILITY_LOSS_THRESHOLD_BYTE,         C_RDCI_PARK_SUP_MOBILITY_LOSS_THRESHOLD_MASK         );}
FUNC(ImpTypeValCRdciParkSupNotificationThresholdValueC,   RTE_CODE) RTE_Stub_Prm_CRdciParkSupNotificationThresholdValueC  (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_C_BYTE,  C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_C_MASK  );}
FUNC(ImpTypeValCRdciParkSupNotificationThresholdValueNc,  RTE_CODE) RTE_Stub_Prm_CRdciParkSupNotificationThresholdValueNc (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_NC_BYTE, C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_NC_MASK );}
FUNC(ImpTypeValCRdciParkSupTolNoTempComp,                 RTE_CODE) RTE_Stub_Prm_CRdciParkSupTolNoTempComp                (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PARK_SUP_TOL_NO_TEMP_COMP_BYTE,                C_RDCI_PARK_SUP_TOL_NO_TEMP_COMP_MASK                );}
FUNC(ImpTypeValCRdciParkSupTolTempComp,                   RTE_CODE) RTE_Stub_Prm_CRdciParkSupTolTempComp                  (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PARK_SUP_TOL_TEMP_COMP_BYTE,                   C_RDCI_PARK_SUP_TOL_TEMP_COMP_MASK                   );}
FUNC(ImpTypeValCRdciParkSupWarningThresholdValueC,        RTE_CODE) RTE_Stub_Prm_CRdciParkSupWarningThresholdValueC       (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_C_BYTE,       C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_C_MASK       );}
FUNC(ImpTypeValCRdciParkSupWarningThresholdValueNc,       RTE_CODE) RTE_Stub_Prm_CRdciParkSupWarningThresholdValueNc      (void){return  NvmDscCodierdatenRDCi_ReadByte(      C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_NC_BYTE,      C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_NC_MASK      );}

Rte_CtApHufTpmsSWC_PiCalPrmRDCi_R_Calprm_CRdciLearnLocateConfig_FncRetPtrType RTE_Stub_Prm_CRdciLearnLocateConfig(void){
   LearnLocateConfig[0] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_LEARN_LOCATE_CONFIG_BYTE_0, C_RDCI_LEARN_LOCATE_CONFIG_MASK_0);
   LearnLocateConfig[1] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_LEARN_LOCATE_CONFIG_BYTE_1, C_RDCI_LEARN_LOCATE_CONFIG_MASK_1);
   return LearnLocateConfig;
}

Rte_CtApHufTpmsSWC_PiCalPrmRDCi_R_Calprm_CRdciTrefSeasAdjConfig_FncRetPtrType RTE_Stub_Prm_CRdciTrefSeasAdjConfig(void){
   TrefSeasAdjConfig[0] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_0, C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_0);
   TrefSeasAdjConfig[1] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_1, C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_1);
   TrefSeasAdjConfig[2] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_2, C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_2);
   TrefSeasAdjConfig[3] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_3, C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_3);
   return TrefSeasAdjConfig;
}

FUNC(ImpTypeValCRdciSpeedCcmPressOffsetFa, RTE_CODE) RTE_Stub_Prm_CRdciSpeedCcmPressOffsetFa(void){
   union{
    ImpTypeValCRdciSpeedCcmPressOffsetFa SpeedCcmPressOffsetFa;
      uint8                                aucSpeedCcmPressOffsetFa[sizeof(ImpTypeValCRdciSpeedCcmPressOffsetFa)];
   }tSpeedCcmPressOffsetFa;
   tSpeedCcmPressOffsetFa.aucSpeedCcmPressOffsetFa[0] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_BYTE_0, C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_MASK_0);
   tSpeedCcmPressOffsetFa.aucSpeedCcmPressOffsetFa[1] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_BYTE_1, C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_MASK_1);
   return tSpeedCcmPressOffsetFa.SpeedCcmPressOffsetFa;
}

FUNC(ImpTypeValCRdciSpeedCcmPressOffsetRa, RTE_CODE) RTE_Stub_Prm_CRdciSpeedCcmPressOffsetRa(void){
   union{
    ImpTypeValCRdciSpeedCcmPressOffsetRa SpeedCcmPressOffsetRa;
      uint8                                aucSpeedCcmPressOffsetRa[sizeof(ImpTypeValCRdciSpeedCcmPressOffsetRa)];
   }tSpeedCcmPressOffsetRa;
   tSpeedCcmPressOffsetRa.aucSpeedCcmPressOffsetRa[0] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_BYTE_0, C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_MASK_0);
   tSpeedCcmPressOffsetRa.aucSpeedCcmPressOffsetRa[1] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_BYTE_1, C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_MASK_1);
   return tSpeedCcmPressOffsetRa.SpeedCcmPressOffsetRa;
}

FUNC(ImpTypeValCRdciSpeedCcmTh, RTE_CODE) RTE_Stub_Prm_CRdciSpeedCcmTh(void){
   union{
    ImpTypeValCRdciSpeedCcmTh SpeedCcmTh;
      uint8                     aucSpeedCcmTh[sizeof(ImpTypeValCRdciSpeedCcmTh)];
   }tSpeedCcmTh;
   tSpeedCcmTh.aucSpeedCcmTh[0] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_SPEED_CCM_TH_BYTE_0, C_RDCI_SPEED_CCM_TH_MASK_0);
   tSpeedCcmTh.aucSpeedCcmTh[1] = NvmDscCodierdatenRDCi_ReadByte( C_RDCI_SPEED_CCM_TH_BYTE_1, C_RDCI_SPEED_CCM_TH_MASK_1);
   return tSpeedCcmTh.SpeedCcmTh;
}

Rte_CtApHufTpmsSWC_PiCalPrmRDCi_R_Calprm_CRdciErfsReifenEco_FncRetPtrType RTE_Stub_Prm_CRdciErfsReifenEco(void){
   static const ImpTypeRecCRdciErfsReifenEco aucTyreListDefaultVal = {
         {
            0x5A, 0x52, 0x4C, 0x54, 0x22, 0x5A, 0x77, 0x1F,
            0x6A, 0x42, 0x5E, 0x5C, 0x22, 0x49, 0x77, 0x36,
            0x6A, 0x3A, 0x6E, 0x50, 0x22, 0x49, 0x77, 0x72,
            0x82, 0x32, 0x6E, 0x60, 0x22, 0x47, 0x77, 0xAC,
            0x82, 0x2A, 0x7E, 0x54, 0x22, 0x49, 0x77, 0x9E,
            0x82, 0x22, 0x8E, 0x44, 0x22, 0xAF, 0x77, 0x90,
            0x5A, 0x52, 0x49, 0x55, 0x22, 0x5A, 0x77, 0x1B,
            0x6A, 0x42, 0x59, 0x5E, 0x22, 0x49, 0x77, 0x33,
            0x6A, 0x3A, 0x69, 0x51, 0x22, 0x49, 0x77, 0x74,
            0x82, 0x32, 0x6A, 0x61, 0x22, 0x47, 0x77, 0xA9,
            0x82, 0x32, 0x6A, 0x61, 0x24, 0x47, 0x77, 0xAF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
            0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
         }
      ,  {0x5D02}
   };
   ErfsReifenEcoTyreList = aucTyreListDefaultVal;
   return(&ErfsReifenEcoTyreList);
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

