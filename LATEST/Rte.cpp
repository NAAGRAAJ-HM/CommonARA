/******************************************************************************/
/* File   : Rte.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infRte_EcuM.hpp"
#include "infRte_Dcm.hpp"
#include "infRte_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define RTE_AR_RELEASE_MAJOR_VERSION                                           4
#define RTE_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(RTE_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible RTE_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(RTE_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible RTE_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Rte:
      public abstract_module
{
   public:
      module_Rte(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, RTE_CODE) InitFunction   (void);
      FUNC(void, RTE_CODE) DeInitFunction (void);
      FUNC(void, RTE_CODE) MainFunction   (void);
};

extern VAR(module_Rte, RTE_VAR) Rte;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, RTE_VAR, RTE_CONST) gptrinfEcuMClient_Rte = &Rte;
CONSTP2VAR(infDcmClient,  RTE_VAR, RTE_CONST) gptrinfDcmClient_Rte  = &Rte;
CONSTP2VAR(infSchMClient, RTE_VAR, RTE_CONST) gptrinfSchMClient_Rte = &Rte;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
//#include "CfgRte.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Rte, RTE_VAR) Rte(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, RTE_CODE) module_Rte::InitFunction(
   CONSTP2CONST(CfgRte_Type, CFGRTE_CONFIG_DATA, CFGRTE_APPL_CONST) lptrCfgRte
){
   if(NULL_PTR == lptrCfgRte){
#if(STD_ON == Rte_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgRte for memory faults
// use PBcfg_Rte as back-up configuration
   }
   Rte.IsInitDone = E_OK;
}

FUNC(void, RTE_CODE) module_Rte::DeInitFunction(void){
   Rte.IsInitDone = E_NOT_OK;
}

FUNC(void, RTE_CODE) module_Rte::MainFunction(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

