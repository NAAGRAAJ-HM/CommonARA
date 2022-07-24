#pragma once
/******************************************************************************/
/* File   : Rte.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstRte.hpp"
#include "CfgRte.hpp"
#include "Rte_core.hpp"
#include "infRte_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Rte:
      INTERFACES_EXPORTED_RTE
      public abstract_module
   ,  public class_Rte_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstRte_Type* lptrConst = (ConstRte_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, RTE_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, RTE_CONST,       RTE_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   RTE_CONFIG_DATA, RTE_APPL_CONST) lptrCfgModule
      );
      FUNC(void, RTE_CODE) DeInitFunction (void);
      FUNC(void, RTE_CODE) MainFunction   (void);
      RTE_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_Rte, RTE_VAR) Rte;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

