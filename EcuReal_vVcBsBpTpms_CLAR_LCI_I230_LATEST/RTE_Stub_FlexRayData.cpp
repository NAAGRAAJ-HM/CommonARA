/******************************************************************************/
/* File   : RTE_Stub_FlexRayData.cpp                                          */
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
/* All rights reserved. Copyright © 1982 Raajnaag HULIYAPURADA MATA           */
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
#include "Rte_Stub_FlexRayDataX.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define cIx_DISP_HR                                               ((uint8) 0x01)
#define cIx_DISP_MN                                               ((uint8) 0x02)
#define cIx_DISP_SEC                                              ((uint8) 0x04)
#define cIx_DISP_DATE_DAY                                         ((uint8) 0x08)
#define cIx_DISP_DATE_WDAY                                        ((uint8) 0x10)
#define cIx_DISP_DATE_MON                                         ((uint8) 0x20)
#define cIx_DISP_DATE_YR                                          ((uint8) 0x40)
#define cIx_ST_DISP_CTI_DATE                                      ((uint8) 0x80)

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
ImpTypeValFrBusState              FlexrayBusState;
Rdci_V_VEH_Type                   speedData;
Rdci_WMOM_DRV_4_Type              directionData;
Rdci_CON_VEH_Type                 vehicleCondition;
Rdci_UHRZEIT_DATUM_Type           timeDate;
Rdci_GNSSErrorAltitudeMeters_Type posAltitude;
Rdci_GNSSErrorAltitudeMeters_Type errorAltitudeMeters;
Rdci_TEMP_EX_Type                 temperatureData = 0;
Rdci_UN_AIP_Type                  unitAipData     = 0;
Rdci_UN_TEMP_Type                 unitTempData    = 0;
Rdci_UN_MILE_Type                 unitMileData    = 0;
Rdci_OP_SLCTN_TYR_AVLB_Type       OpSlctnTyr      = 0;
Rdci_OP_TAR_P_LOCO_TPCT_Type      OpTarPLoco      = 0;
Rdci_OP_TPCT_Type                 OpTpct          = 0;
Rdci_OP_TYR_SEA_TPCT_Type         OpTyrSeason     = 0;
Rdci_RQ_OL_TPCT_Type              RqOl            = 0;
Rdci_OP_IDR_SLCTN_Type            OpIdrSlctn      = 0;
Rdci_ST_IDR_MSGC_Type             StIdrMsgc       = 0;
Rdci_T_SEC_COU_REL_Type           timeRel         = 0;
Rdci_AIP_ENG_DRV_Type             ambientPressure = 0;
Rdci_MILE_KM_Type                 MileKm          = 0;
Rdci_ST_ILK_ERRM_FZM_Type         ucStIlkErrmFzm  = 0;
Rdci_ST_ENERG_FZM_Type            ucStEnergFzm    = 0;

bool bNewSpeedData;
bool bNewUnitMileData;
bool bNewUnitTempData;
bool bNewUnitAipData;
bool bNewTemperatureData;
bool bNewDirectionData;
bool bNewOpSlctnTyr;
bool bNewOpTyrSeason;
bool bNewOpTarPLoco;
bool bNewRqOl;
bool bNewOpTpct;
bool bNewTimeDate;
bool bNewVehicleCondition;
bool bNewOpIdrSlctn;
bool bNewStIdrMsgc;
bool bNewTimeRel;
bool bNewAmbientPressure;
bool bNewPositionAltitude;
bool bNewErrorAltitudeMeters;
bool bNewMileKm;
bool bNewStIlkErrmFzm;
bool bNewStEnergFzm;
bool bNewFrBusState;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif
FUNC(void,           RTE_CODE) PutSpeedData                               (P2CONST( Rdci_V_VEH_Type,                   AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){speedData           = *data;               bNewSpeedData           = true;}
FUNC(void,           RTE_CODE) PutUnitDataMile                            (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){unitMileData        = *data;               bNewUnitMileData        = true;}
FUNC(void,           RTE_CODE) PutUnitDataAip                             (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){unitAipData         = *data;               bNewUnitAipData         = true;}
FUNC(void,           RTE_CODE) PutUnitDataTemp                            (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){unitTempData        = *data;               bNewUnitTempData        = true;}
FUNC(void,           RTE_CODE) PutTemperatureData                         (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){temperatureData     = *data;               bNewTemperatureData     = true;}
FUNC(void,           RTE_CODE) PutDirectionData                           (P2CONST( Rdci_WMOM_DRV_4_Type,              AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){directionData       = *data;               bNewDirectionData       = true;}
FUNC(void,           RTE_CODE) PutOpSlctnTyr                              (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){OpSlctnTyr          = *data;               bNewOpSlctnTyr          = true;}
FUNC(void,           RTE_CODE) PutOpTarPLoco                              (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){OpTarPLoco          = *data;               bNewOpTarPLoco          = true;}
FUNC(void,           RTE_CODE) PutOpTpct                                  (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){OpTpct              = *data;               bNewOpTpct              = true;}
FUNC(void,           RTE_CODE) PutOpTyrSeason                             (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){OpTyrSeason         = *data;               bNewOpTyrSeason         = true;}
FUNC(void,           RTE_CODE) PutRqOl                                    (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){RqOl                = *data;               bNewRqOl                = true;}
FUNC(void,           RTE_CODE) PutOpIdrSlctn                              (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){OpIdrSlctn          = *data;               bNewOpIdrSlctn          = true;}
FUNC(void,           RTE_CODE) PutStIdrMsgc                               (P2CONST( uint8,                             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){StIdrMsgc           = *data;               bNewStIdrMsgc           = true;}
FUNC(void,           RTE_CODE) PutRelTime                                 (P2CONST( Rdci_T_SEC_COU_REL_Type,           AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){timeRel             = *data;               bNewTimeRel             = true;}
FUNC(void,           RTE_CODE) PutAmbientPressure                         (P2CONST( Rdci_AIP_ENG_DRV_Type,             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){ambientPressure     = *data;               bNewAmbientPressure     = true;}
FUNC(void,           RTE_CODE) PutPositionAltitude                        (P2CONST( Rdci_GNSSPositionAltitude_Type,    AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){posAltitude         = *data;               bNewPositionAltitude    = true;}
FUNC(void,           RTE_CODE) PutErrorAltitudeMeters                     (P2CONST( Rdci_GNSSPositionAltitude_Type,    AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){errorAltitudeMeters = *data;               bNewErrorAltitudeMeters = true;}
FUNC(void,           RTE_CODE) PutTimeDate                                (P2CONST( Rdci_UHRZEIT_DATUM_Type,           AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){timeDate            = *data;               bNewTimeDate            = true;}
FUNC(void,           RTE_CODE) PutMileKm                                  (P2CONST( Rdci_MILE_KM_Type,                 AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){MileKm              = *data;               bNewMileKm              = true;}
FUNC(void,           RTE_CODE) PutVehicleCondition                        (P2CONST( Rdci_CON_VEH_Type,                 AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){vehicleCondition    = *data;               bNewVehicleCondition    = true;}
FUNC(void,           RTE_CODE) PutBusState                                (P2CONST( ImpTypeValFrBusState,              AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ucBusState   ){FlexrayBusState     = *ucBusState;         bNewFrBusState          = true;}
FUNC(void,           RTE_CODE) PutStIlkErrmFzm                            (P2CONST( Rdci_ST_ILK_ERRM_FZM_Type,         AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) StIlkErrmFzm ){ucStIlkErrmFzm      = *StIlkErrmFzm;       bNewStIlkErrmFzm        = true;}
FUNC(void,           RTE_CODE) PutStEnergFzm                              (P2CONST( Rdci_ST_ENERG_FZM_Type,            AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) StEnergFzm   ){ucStEnergFzm        = *StEnergFzm;         bNewStEnergFzm          = true;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_V_VEH                        (P2VAR(   Rdci_V_VEH_Type,                   AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = speedData;           bNewSpeedData           = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_WMOM_DRV_4                   (P2VAR(   Rdci_WMOM_DRV_4_Type,              AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = directionData;       bNewDirectionData       = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_TEMP_EX                      (P2VAR(   Rdci_TEMP_EX_Type,                 AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = temperatureData;     bNewTemperatureData     = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_UN_AIP                       (P2VAR(   Rdci_UN_AIP_Type,                  AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = unitAipData;         bNewUnitAipData         = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_UN_MILE                      (P2VAR(   Rdci_UN_MILE_Type,                 AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = unitMileData;        bNewUnitMileData        = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_UN_TEMP                      (P2VAR(   Rdci_UN_TEMP_Type,                 AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = unitTempData;        bNewUnitTempData        = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_CON_VEH                      (P2VAR(   Rdci_CON_VEH_Type,                 AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = vehicleCondition;    bNewVehicleCondition    = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_OP_SLCTN_TYR_AVLB            (P2VAR(   Rdci_OP_SLCTN_TYR_AVLB_Type,       AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = OpSlctnTyr;          bNewOpSlctnTyr          = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_OP_TAR_P_LOCO_TPCT           (P2VAR(   Rdci_OP_TAR_P_LOCO_TPCT_Type,      AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = OpTarPLoco;          bNewOpTarPLoco          = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_OP_TPCT                      (P2VAR(   Rdci_OP_TPCT_Type,                 AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = OpTpct;              bNewOpTpct              = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_OP_TYR_SEA_TPCT              (P2VAR(   Rdci_OP_TYR_SEA_TPCT_Type,         AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = OpTyrSeason;         bNewOpTyrSeason         = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_RQ_OL_TPCT                   (P2VAR(   Rdci_RQ_OL_TPCT_Type,              AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = RqOl;                bNewRqOl                = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_OP_IDR_SLCTN                 (P2VAR(   Rdci_OP_IDR_SLCTN_Type,            AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = OpIdrSlctn;          bNewOpIdrSlctn          = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_ST_IDR_MSGC                  (P2VAR(   Rdci_ST_IDR_MSGC_Type,             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = StIdrMsgc;           bNewStIdrMsgc           = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_UHRZEIT_DATUM                (P2VAR(   Rdci_UHRZEIT_DATUM_Type,           AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = timeDate;            bNewTimeDate            = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_T_SEC_COU_REL                (P2VAR(   Rdci_T_SEC_COU_REL_Type,           AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = timeRel;             bNewTimeRel             = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_AIP_ENG_DRV                  (P2VAR(   Rdci_AIP_ENG_DRV_Type,             AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = ambientPressure;     bNewAmbientPressure     = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_GNSSPositionAltitude         (P2VAR(   Rdci_GNSSPositionAltitude_Type,    AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = posAltitude;         bNewPositionAltitude    = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_GNSSErrorAltitudeMeters      (P2VAR(   Rdci_GNSSErrorAltitudeMeters_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = errorAltitudeMeters; bNewErrorAltitudeMeters = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_MILE_KM                      (P2VAR(   Rdci_MILE_KM_Type,                 AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = MileKm;              bNewMileKm              = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_ST_ILK_ERRM_FZM              (P2VAR(   Rdci_ST_ILK_ERRM_FZM_Type,         AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = ucStIlkErrmFzm;      bNewStIlkErrmFzm        = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_ST_ENERG_FZM                 (P2VAR(   Rdci_ST_ENERG_FZM_Type,            AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) data         ){*data               = ucStEnergFzm;        bNewStEnergFzm          = false; return E_OK;}
FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Read_FrBusState                   (P2VAR(   ImpTypeValFrBusState,              AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) pucState     ){*pucState           = FlexrayBusState;     bNewFrBusState          = false; return E_OK;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_TEMP_EX                 (void                                                                                             ){                                                                            return bNewTemperatureData;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_UN_AIP                  (void                                                                                             ){                                                                            return bNewUnitAipData;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_UN_MILE                 (void                                                                                             ){                                                                            return bNewUnitMileData;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_UN_TEMP                 (void                                                                                             ){                                                                            return bNewUnitTempData;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_CON_VEH                 (void                                                                                             ){                                                                            return bNewVehicleCondition;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_V_VEH                   (void                                                                                             ){                                                                            return bNewSpeedData;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_WMOM_DRV_4              (void                                                                                             ){                                                                            return bNewDirectionData;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_OP_SLCTN_TYR_AVLB       (void                                                                                             ){                                                                            return bNewOpSlctnTyr;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_OP_TAR_P_LOCO_TPCT      (void                                                                                             ){                                                                            return bNewOpTarPLoco;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_OP_TPCT                 (void                                                                                             ){                                                                            return bNewOpTpct;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_OP_TYR_SEA_TPCT         (void                                                                                             ){                                                                            return bNewOpTyrSeason;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_RQ_OL_TPCT              (void                                                                                             ){                                                                            return bNewRqOl;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_ST_IDR_MSGC             (void                                                                                             ){                                                                            return bNewStIdrMsgc;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_OP_IDR_SLCTN            (void                                                                                             ){                                                                            return bNewOpIdrSlctn;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_UHRZEIT_DATUM           (void                                                                                             ){                                                                            return bNewTimeDate;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_AIP_ENG_DRV             (void                                                                                             ){                                                                            return bNewAmbientPressure;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_GNSSPositionAltitude    (void                                                                                             ){                                                                            return bNewPositionAltitude;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_GNSSErrorAltitudeMeters (void                                                                                             ){                                                                            return bNewErrorAltitudeMeters;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_T_SEC_COU_REL           (void                                                                                             ){                                                                            return bNewTimeRel;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_MILE_KM                 (void                                                                                             ){                                                                            return bNewMileKm;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_ST_ILK_ERRM_FZM         (void                                                                                             ){                                                                            return bNewStIlkErrmFzm;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_ST_ENERG_FZM            (void                                                                                             ){                                                                            return bNewStEnergFzm;}
FUNC(boolean,        RTE_CODE) RTE_Stub_IsUpdated_FrBusState              (void                                                                                             ){                                                                            return bNewFrBusState;}
#ifdef __cplusplus
}
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

