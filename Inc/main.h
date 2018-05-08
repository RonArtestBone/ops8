/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx.h"
#include "stm32f1xx_ll_system.h"
#include "stm32f1xx_ll_gpio.h"
#include "stm32f1xx_ll_exti.h"
#include "stm32f1xx_ll_bus.h"
#include "stm32f1xx_ll_cortex.h"
#include "stm32f1xx_ll_rcc.h"
#include "stm32f1xx_ll_utils.h"
#include "stm32f1xx_ll_pwr.h"
#include "stm32f1xx_ll_dma.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define K8_Pin LL_GPIO_PIN_0
#define K8_GPIO_Port GPIOA
#define K7_Pin LL_GPIO_PIN_1
#define K7_GPIO_Port GPIOA
#define K6_Pin LL_GPIO_PIN_2
#define K6_GPIO_Port GPIOA
#define K5_Pin LL_GPIO_PIN_3
#define K5_GPIO_Port GPIOA
#define K4_Pin LL_GPIO_PIN_4
#define K4_GPIO_Port GPIOA
#define K3_Pin LL_GPIO_PIN_5
#define K3_GPIO_Port GPIOA
#define K2_Pin LL_GPIO_PIN_6
#define K2_GPIO_Port GPIOA
#define K1_Pin LL_GPIO_PIN_7
#define K1_GPIO_Port GPIOA
#define LED_Pin LL_GPIO_PIN_0
#define LED_GPIO_Port GPIOB
#define SPI2_NSS_Pin LL_GPIO_PIN_12
#define SPI2_NSS_GPIO_Port GPIOB
#define RES_Pin LL_GPIO_PIN_11
#define RES_GPIO_Port GPIOA
#define RS_Pin LL_GPIO_PIN_12
#define RS_GPIO_Port GPIOA
#define CS_Pin LL_GPIO_PIN_15
#define CS_GPIO_Port GPIOA
#define RUN1_Pin LL_GPIO_PIN_10
#define RUN1_GPIO_Port GPIOC
#define RUN2_Pin LL_GPIO_PIN_11
#define RUN2_GPIO_Port GPIOC
#define RUN3_Pin LL_GPIO_PIN_12
#define RUN3_GPIO_Port GPIOC
#define RUN4_Pin LL_GPIO_PIN_2
#define RUN4_GPIO_Port GPIOD
#define SCL_Pin LL_GPIO_PIN_3
#define SCL_GPIO_Port GPIOB
#define RUN5_Pin LL_GPIO_PIN_4
#define RUN5_GPIO_Port GPIOB
#define SDA_Pin LL_GPIO_PIN_5
#define SDA_GPIO_Port GPIOB
#define RUN6_Pin LL_GPIO_PIN_6
#define RUN6_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
 #define USE_FULL_ASSERT    1U 

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
