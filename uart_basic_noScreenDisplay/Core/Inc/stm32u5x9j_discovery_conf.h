/**
  ******************************************************************************
  * @file    stm32u5x9j_discovery_conf_template.h
  * @author  MCD Application Team
  * @brief   STM32U5x9J_DISCOVERY board configuration file.
  *          This file should be copied to the application folder and renamed
  *          to stm32u5x9j_discovery_conf.h .
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32U5x9J_DISCOVERY_CONF_H
#define STM32U5x9J_DISCOVERY_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32u5xx_hal.h"

/* Usage of STM32U5x9J_DISCOVERY board */
#define USE_STM32U5x9J_DISCOVERY      1U

/* COM define */
#define USE_BSP_COM_FEATURE                  0U
#define USE_COM_LOG                          0U

/* I2C1 and I2C2 Frequencies in Hz  */
#define BUS_I2C1_FREQUENCY                   100000UL /* Frequency of I2C1 = 100 KHz*/
#define BUS_I2C2_FREQUENCY                   100000UL /* Frequency of I2C2 = 100 KHz*/

/* Button user interrupt priority */
#define BSP_BUTTON_USER_IT_PRIORITY          0x0FUL  /* Default is lowest priority level */

/* LCD interrupt priorities */
#define BSP_LCD_GFXMMU_IT_PRIORITY 0x0FUL  /* Default is lowest priority level */
#define BSP_LCD_LTDC_IT_PRIORITY   0x0FUL  /* Default is lowest priority level */
#define BSP_LCD_DSI_IT_PRIORITY    0x0FUL  /* Default is lowest priority level */
#define BSP_LCD_DMA2D_IT_PRIORITY  0x0FUL  /* Default is lowest priority level */

/* HSPI RAM interrupt priority */
#define BSP_HSPI_RAM_IT_PRIORITY     0x0FUL  /* Default is lowest priority level */
#define BSP_HSPI_RAM_DMA_IT_PRIORITY 0x0FUL  /* Default is lowest priority level */

/* Touch screen interrupt priority */
#define BSP_TS_IT_PRIORITY            0x15UL  /* Default is lowest priority level */

/* Audio interrupt priorities */
#define BSP_AUDIO_IN_IT_PRIORITY      0x02UL  /* Default is lowest priority level */
#define BSP_AUDIO_OUT_IT_PRIORITY     0x02UL  /* Default is lowest priority level */

/* SD card interrupt priority */
#define BSP_SD_IT_PRIORITY            0x15UL  /* Default is lowest priority level */
#define BSP_SD_RX_IT_PRIORITY         0x14UL  /* Default is lowest priority level */
#define BSP_SD_TX_IT_PRIORITY         0x15UL  /* Default is lowest priority level */

/* SRAM DMA interrupt priority */
#define BSP_SRAM_DMA_IT_PRIORITY      0x15UL  /* Default is lowest priority level */

/* Default AUDIO IN internal buffer size in 32-bit words per micro */
#define BSP_AUDIO_IN_DEFAULT_BUFFER_SIZE  8192UL    /* 2048*4 = 8Kbytes */

/* DSI TS INT pin */
#define TS_INT_PIN                    GPIO_PIN_8
#define TS_INT_GPIO_PORT              GPIOE
#define TS_INT_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOE_CLK_ENABLE()
#define TS_INT_GPIO_CLK_DISABLE()     __HAL_RCC_GPIOE_CLK_DISABLE()
#define TS_INT_EXTI_IRQn              EXTI8_IRQn

#ifdef __cplusplus
}
#endif

#endif /* STM32U5x9J_DISCOVERY_CONF_H */

