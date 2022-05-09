/******************************************************************************/
/* File   : Rte.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgRte.hpp"
#include "Rte_core.hpp"
#include "infRte.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define RTE_AR_RELEASE_VERSION_MAJOR                                           4
#define RTE_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(RTE_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible RTE_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(RTE_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible RTE_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Rte:
      public abstract_module
   ,  public class_Rte_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

   public:
      module_Rte(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, RTE_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, RTE_CONFIG_DATA, RTE_APPL_CONST) lptrCfgModule
      );
      FUNC(void, RTE_CODE) DeInitFunction (void);
      FUNC(void, RTE_CODE) MainFunction   (void);
      RTE_CORE_FUNCTIONALITIES
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

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Rte, RTE_VAR) Rte(
   {
         RTE_AR_RELEASE_VERSION_MAJOR
      ,  RTE_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
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
   CONSTP2CONST(CfgModule_TypeAbstract, RTE_CONFIG_DATA, RTE_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Rte_InitCheck)
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgRte;
         }
      }
      else{
#if(STD_ON == Rte_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Rte_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Rte_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  RTE_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, RTE_CODE) module_Rte::DeInitFunction(void){
#if(STD_ON == Rte_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == Rte_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Rte_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  RTE_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, RTE_CODE) module_Rte::MainFunction(void){
#if(STD_ON == Rte_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == Rte_InitCheck)
   }
   else{
#if(STD_ON == Rte_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  RTE_E_UNINIT
      );
#endif
   }
#endif
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

