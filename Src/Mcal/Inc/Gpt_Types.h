/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Dio_Types.h
 *       Module:  Dio
 *
 *  Description:   header file for Dio types
 *  
 *********************************************************************************************************************/
#ifndef GPT_TYPES_H
#define GPT_TYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define GPT_ENABLE                1
#define GPT_DISABLE               0

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum{
    GPT_TIMER_0 =0,
    GPT_TIMER_1,
    GPT_TIMER_2,
    GPT_TIMER_3,
    GPT_TIMER_4,
    GPT_TIMER_5,

    GPT_WIDETIMER_0 ,
    GPT_WIDETIMER_1,
    GPT_WIDETIMER_2,
    GPT_WIDETIMER_3,
    GPT_WIDETIMER_4,
    GPT_WIDETIMER_5
}Gpt_ChannelType;

typedef enum{
    GPT_ONESHOT_MODE =1,
    GPT_CONTINUOUS_MODE
}Gpt_ModeType;


typedef uint8 Gpt_PredefTimerType;
typedef uint32 Gpt_ValueType;

typedef struct
{
    Gpt_ChannelType Gpt_ChannelId;
    Gpt_ValueType Gpt_ChannelTickFreq;
    Gpt_ValueType Gpt_ChannelTickValueMax;
    Gpt_ModeType Gpt_ChannelMode;
    void (*Gpt_Notification) (void) 
}Gpt_ConfigType;
/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* GPT_TYPES_H */

/**********************************************************************************************************************
 *  END OF FILE: Gpt_Types.h
 *********************************************************************************************************************/