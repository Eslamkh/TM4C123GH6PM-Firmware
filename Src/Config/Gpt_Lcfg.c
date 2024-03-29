/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Gpt_Lcfg.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Gpt_Cfg.h"
#include "Gpt_Types.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/
Gpt_ConfigType GptConfigChannels [GPT_NUM_OF_ACTIVATED_CHANNELS] =
{
    /* ChannelId         ChannelTickFreq             ChannelTickValueMax                  ChannelMode           Notification  */           
    {GPT_TIMER_0,           16000000,                        32,                       GPT_CONTINUOUS_MODE,        NULL_PTR},
    {GPT_TIMER_1,           16000000,                        32,                       GPT_ONESHOT_MODE,           NULL_PTR},
};


/**********************************************************************************************************************
 *  END OF FILE: Port_Lcfg.c
 *********************************************************************************************************************/
