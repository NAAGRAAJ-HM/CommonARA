/*****************************************************/
/* File   : Rte.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Rte_EcuM.h"
#include "Rte_SchM.h"
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
   ,  public interface_Rte_EcuM
   ,  public interface_Rte_SchM
{
   public:
      FUNC(void, RTE_CODE) InitFunction   (void);
      FUNC(void, RTE_CODE) DeInitFunction (void);
      FUNC(void, RTE_CODE) MainFunction   (void);
      FUNC(void, RTE_CODE) Dummy_Rte_EcuM (void);
      FUNC(void, RTE_CODE) Dummy_Rte_SchM (void);
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
module_Rte Rte;

interface_Rte_EcuM *EcuM_Client_ptr_Rte = &Rte;
interface_Rte_SchM *SchM_Client_ptr_Rte = &Rte;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, RTE_CODE) module_Rte::InitFunction(void){
}

FUNC(void, RTE_CODE) module_Rte::DeInitFunction(void){
}

FUNC(void, RTE_CODE) module_Rte::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

