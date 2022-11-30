#pragma once
/******************************************************************************/
/* File   : infProjectARA_Exp.hpp                                             */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infProjectARA_ServiceDet.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define INTERFACES_EXPORTED_RTE

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{ //TBD: move to destination module specific Rte interface
   sint16 A;
   sint16 B;
}TPhaseCurr;

typedef struct{ //TBD: move to destination module specific Rte interface
   TPhaseCurr PhaseCurr;
}type_Rte_Buffer;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern type_Rte_Buffer Rte_Buffer; //TBD: move to destination module specific Rte interface

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

