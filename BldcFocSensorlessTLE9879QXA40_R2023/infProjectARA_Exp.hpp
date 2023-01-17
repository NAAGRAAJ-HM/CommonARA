#pragma once
/******************************************************************************/
/* File   : infProjectARA_Exp.hpp                                             */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Rte_ApplSwcFoc.hpp"
#include "Rte_ServiceDet.hpp"

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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

