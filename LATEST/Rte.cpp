/*****************************************************/
/* File   : Rte.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infRte_EcuM.h"
#include "infRte_SchM.h"
#include "Rte_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Rte:
      public abstract_module
{
   public:
      FUNC(void, RTE_CODE) InitFunction   (void);
      FUNC(void, RTE_CODE) DeInitFunction (void);
      FUNC(void, RTE_CODE) GetVersionInfo (void);
      FUNC(void, RTE_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Rte     Rte;
infEcuMClient* gptrinfEcuMClient_Rte = &Rte;
infDcmClient*  gptrinfDcmClient_Rte  = &Rte;
infSchMClient* gptrinfSchMClient_Rte = &Rte;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, RTE_CODE) module_Rte::InitFunction(void){
}

FUNC(void, RTE_CODE) module_Rte::DeInitFunction(void){
}

FUNC(void, RTE_CODE) module_Rte::GetVersionInfo(void){
}

FUNC(void, RTE_CODE) module_Rte::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

