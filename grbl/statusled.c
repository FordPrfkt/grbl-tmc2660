/*!
***     \file	  statusled.c
***     \ingroup  statusled
***     \author   Daniel
***     \date	  12/18/2017 3:52:09 AM
***     \brief    TODO
***
******************************************************************************/

/*=============================================================================
 =======                            INCLUDES                             =======
 =============================================================================*/
#include "statusled.h"
/*=============================================================================
 =======               DEFINES & MACROS FOR GENERAL PURPOSE              =======
 =============================================================================*/

/*=============================================================================
 =======                       CONSTANTS  &  TYPES                       =======
 =============================================================================*/
// #define STATE_IDLE          0      // Must be zero. No flags.													-->Gr�n
// #define STATE_ALARM         bit(0) // In alarm state. Locks out all g-code processes. Allows settings access.	-->Rot blinked schnell
// #define STATE_CHECK_MODE    bit(1) // G-code check mode. Locks out planner and motion only.						-->Gr�n blinkend langsam
// #define STATE_HOMING        bit(2) // Performing homing cycle													-->Gelb
// #define STATE_CYCLE         bit(3) // Cycle is running or motions are being executed.							-->Gelb
 //#define STATE_HOLD          bit(4) // Active feed hold															-->Rot
 //#define STATE_JOG           bit(5) // Jogging mode.																-->Gelb blinkend langsam
 //#define STATE_SAFETY_DOOR   bit(6) // Safety door is ajar. Feed holds and de-energizes system.					-->Rot
 //#define STATE_SLEEP         bit(7) // Sleep state.																-->Gr�n

/*=============================================================================
 =======                VARIABLES & MESSAGES & RESSOURCEN                =======
 =============================================================================*/

/*=============================================================================
 =======                              METHODS                           =======
 =============================================================================*/

/* -----------------------------------------------------
 * --               Public functions                  --
 * ----------------------------------------------------- */

/* -----------------------------------------------------
 * --               Private functions                  --
 * ----------------------------------------------------- */
