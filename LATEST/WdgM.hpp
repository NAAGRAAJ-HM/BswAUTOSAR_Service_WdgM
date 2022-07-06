#pragma once
/******************************************************************************/
/* File   : WdgM.hpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgWdgM.hpp"
#include "WdgM_core.hpp"
#include "infWdgM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_WdgM:
      INTERFACES_EXPORTED_WDGM
      public abstract_module
   ,  public class_WdgM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, WDGM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, WDGM_CONFIG_DATA, WDGM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, WDGM_CODE) DeInitFunction (void);
      FUNC(void, WDGM_CODE) MainFunction   (void);
      WDGM_CORE_FUNCTIONALITIES
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
extern VAR(module_WdgM, WDGM_VAR) WdgM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

