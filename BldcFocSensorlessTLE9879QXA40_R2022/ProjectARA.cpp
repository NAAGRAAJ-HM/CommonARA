/******************************************************************************/
/* File   : ProjectARA.cpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ProjectARA.hpp"
#include "infProjectARA_Imp.hpp"

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
VAR(module_ProjectARA, RTE_VAR) ProjectARA;
type_Rte_Buffer Rte_Buffer;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, RTE_CODE) module_ProjectARA::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, RTE_CONST,       RTE_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   RTE_CONFIG_DATA, RTE_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ProjectARA_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstProjectARA_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ProjectARA_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
      Rte_Buffer.PhaseCurr.A = 0;
      Rte_Buffer.PhaseCurr.B = 0;
#if(STD_ON == ProjectARA_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ProjectARA_DevErrorDetect)
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

FUNC(void, RTE_CODE) module_ProjectARA::DeInitFunction(
   void
){
#if(STD_ON == ProjectARA_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ProjectARA_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ProjectARA_DevErrorDetect)
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

FUNC(void, RTE_CODE) module_ProjectARA::MainFunction(
   void
){
#if(STD_ON == ProjectARA_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ProjectARA_InitCheck)
   }
   else{
#if(STD_ON == ProjectARA_DevErrorDetect)
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

