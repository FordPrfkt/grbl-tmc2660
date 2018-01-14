/*!
***     \file	  statusled.c
***     \ingroup  statusled
***     \author   Daniel
***     \date	  12/18/2017 6:02:08 PM
***     \brief    TODO
***
******************************************************************************/

/* Header file guard symbol to prevent multiple includes */
#ifndef statusled_H_
#define statusled_H_

/* storage class specifier if used with C++ */
#ifdef  __cplusplus
  extern "C" {
#endif

/*=============================================================================
=======                            INCLUDES                             =======
=============================================================================*/

/*=============================================================================
=======               DEFINES & MACROS FOR GENERAL PURPOSE              =======
=============================================================================*/

/*=============================================================================
=======                       CONSTANTS  &  TYPES                       =======
=============================================================================*/

/*=============================================================================
=======                              EXPORTS                            =======
=============================================================================*/
void statusled_init(void);
void statusled_update(void);

/* end of storage class specifier if used with C++ */
#ifdef  __cplusplus
}
#endif

#endif /*statusled_H_*/