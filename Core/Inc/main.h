/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define KEY_RIGHT_Pin GPIO_PIN_13
#define KEY_RIGHT_GPIO_Port GPIOC
#define BLE_DIO12_Pin GPIO_PIN_0
#define BLE_DIO12_GPIO_Port GPIOC
#define BLE_DIO13_Pin GPIO_PIN_1
#define BLE_DIO13_GPIO_Port GPIOC
#define RWR_Pin GPIO_PIN_2
#define RWR_GPIO_Port GPIOC
#define ERD_Pin GPIO_PIN_3
#define ERD_GPIO_Port GPIOC
#define CTRL_Char_Pin GPIO_PIN_3
#define CTRL_Char_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_4
#define SPI1_CS_GPIO_Port GPIOA
#define HPMb_Pin GPIO_PIN_4
#define HPMb_GPIO_Port GPIOC
#define STN_BL_EN_Pin GPIO_PIN_1
#define STN_BL_EN_GPIO_Port GPIOB
#define DCX_Pin GPIO_PIN_10
#define DCX_GPIO_Port GPIOB
#define Th_out_Pin GPIO_PIN_11
#define Th_out_GPIO_Port GPIOB
#define KEY_LEFT_Pin GPIO_PIN_12
#define KEY_LEFT_GPIO_Port GPIOB
#define KEY_UP_Pin GPIO_PIN_13
#define KEY_UP_GPIO_Port GPIOB
#define KEY_DOWN_Pin GPIO_PIN_11
#define KEY_DOWN_GPIO_Port GPIOC
#define KEY_ENTER_Pin GPIO_PIN_5
#define KEY_ENTER_GPIO_Port GPIOB
#define PANEL_RST_Pin GPIO_PIN_9
#define PANEL_RST_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
