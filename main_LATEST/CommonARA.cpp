/******************************************************************************/
/* File   : CommonARA.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CommonARA.hpp"
#include "infCommonARA_Imp.hpp"

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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_CommonARA, RTE_VAR) CommonARA;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, RTE_CODE) module_CommonARA::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, RTE_CONST,       RTE_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   RTE_CONFIG_DATA, RTE_APPL_CONST) lptrCfgModule
){
#if(STD_ON == CommonARA_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstCommonARA_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == CommonARA_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == CommonARA_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == CommonARA_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  RTE_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, RTE_CODE) module_CommonARA::DeInitFunction(
   void
){
#if(STD_ON == CommonARA_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == CommonARA_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == CommonARA_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  RTE_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, RTE_CODE) module_CommonARA::MainFunction(
   void
){
#if(STD_ON == CommonARA_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == CommonARA_InitCheck)
   }
   else{
#if(STD_ON == CommonARA_DevErrorDetect)
      ServiceDet_ReportError(
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

