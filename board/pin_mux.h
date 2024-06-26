/*
 * Copyright 2024 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#define PCR_DSE_dse1 0x01u /*!<@brief Drive Strength Enable: High */
#define PCR_IBE_ibe1 0x01u /*!<@brief Input Buffer Enable: Enables */

/*! @name PORT4_14 (coord N8), CS
  @{ */

/* Symbols to be used with GPIO driver */
#define LCDFXIOPINS_LCD_CS_GPIO GPIO4                /*!<@brief GPIO peripheral base pointer */
#define LCDFXIOPINS_LCD_CS_GPIO_PIN 14U              /*!<@brief GPIO pin number */
#define LCDFXIOPINS_LCD_CS_GPIO_PIN_MASK (1U << 14U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LCDFXIOPINS_LCD_CS_PORT PORT4                /*!<@brief PORT peripheral base pointer */
#define LCDFXIOPINS_LCD_CS_PIN 14U                   /*!<@brief PORT pin number */
#define LCDFXIOPINS_LCD_CS_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORT0_24 (coord B6), RS
  @{ */

/* Symbols to be used with GPIO driver */
#define LCDFXIOPINS_LCD_RS_GPIO GPIO0                /*!<@brief GPIO peripheral base pointer */
#define LCDFXIOPINS_LCD_RS_GPIO_PIN 24U              /*!<@brief GPIO pin number */
#define LCDFXIOPINS_LCD_RS_GPIO_PIN_MASK (1U << 24U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LCDFXIOPINS_LCD_RS_PORT PORT0                /*!<@brief PORT peripheral base pointer */
#define LCDFXIOPINS_LCD_RS_PIN 24U                   /*!<@brief PORT pin number */
#define LCDFXIOPINS_LCD_RS_PIN_MASK (1U << 24U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORT4_7 (coord T4), RST
  @{ */

/* Symbols to be used with GPIO driver */
#define LCDFXIOPINS_LCD_RST_GPIO GPIO4               /*!<@brief GPIO peripheral base pointer */
#define LCDFXIOPINS_LCD_RST_GPIO_PIN 7U              /*!<@brief GPIO pin number */
#define LCDFXIOPINS_LCD_RST_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define LCDFXIOPINS_LCD_RST_PORT PORT4               /*!<@brief PORT peripheral base pointer */
#define LCDFXIOPINS_LCD_RST_PIN 7U                   /*!<@brief PORT pin number */
#define LCDFXIOPINS_LCD_RST_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void LCDFXIOPins_LCD(void);

#define PCR_IBE_ibe1 0x01u /*!<@brief Input Buffer Enable: Enables */
#define PCR_PFE_pfe1 0x01u /*!<@brief Passive Filter Enable: Enables */
#define PCR_SRE_sre1 0x01u /*!<@brief Slew Rate Enable: Slow */

/*! @name PORT2_2 (coord H3), CAM_XCLK
  @{ */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_XCLK_PORT PORT2               /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_XCLK_PIN 2U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_XCLK_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PORT0_4 (coord B14), CAM_VSYNC
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_VSYNC_GPIO GPIO0               /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_VSYNC_GPIO_PIN 4U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_VSYNC_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_VSYNC_PORT PORT0               /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_VSYNC_PIN 4U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_VSYNC_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORT0_5 (coord A14), CAM_HSYNC
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_HSYNC_GPIO GPIO0               /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_HSYNC_GPIO_PIN 5U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_HSYNC_GPIO_PIN_MASK (1U << 5U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_HSYNC_PORT PORT0               /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_HSYNC_PIN 5U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_HSYNC_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORT0_7 (coord C13), CAM_PCLK
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_PCLK_GPIO GPIO0               /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_PCLK_GPIO_PIN 7U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_PCLK_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_PCLK_PORT PORT0               /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_PCLK_PIN 7U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_PCLK_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PORT1_11 (coord D3), CAM_D7
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_D7_GPIO GPIO1                /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D7_GPIO_PIN 11U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_D7_GPIO_PIN_MASK (1U << 11U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_D7_PORT PORT1                /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D7_PIN 11U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_D7_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PORT1_10 (coord C3), CAM_D7
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_D6_GPIO GPIO1                /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D6_GPIO_PIN 10U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_D6_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_D6_PORT PORT1                /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D6_PIN 10U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_D6_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PORT1_9 (coord B1), CAM_D7
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_D5_GPIO GPIO1               /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D5_GPIO_PIN 9U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_D5_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_D5_PORT PORT1               /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D5_PIN 9U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_D5_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORT1_8 (coord A1), CAM_D7
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_D4_GPIO GPIO1               /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D4_GPIO_PIN 8U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_D4_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_D4_PORT PORT1               /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D4_PIN 8U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_D4_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORT1_7 (coord A2), CAM_D7
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_D3_GPIO GPIO1               /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D3_GPIO_PIN 7U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_D3_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_D3_PORT PORT1               /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D3_PIN 7U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_D3_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORT1_6 (coord B2), CAM_D7
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_D2_GPIO GPIO1               /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D2_GPIO_PIN 6U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_D2_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_D2_PORT PORT1               /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D2_PIN 6U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_D2_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORT1_5 (coord B3), CAM_D7
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_D1_GPIO GPIO1               /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D1_GPIO_PIN 5U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_D1_GPIO_PIN_MASK (1U << 5U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_D1_PORT PORT1               /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D1_PIN 5U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_D1_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORT1_4 (coord A4), CAM_D7
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_D0_GPIO GPIO1               /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D0_GPIO_PIN 4U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_D0_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_D0_PORT PORT1               /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_D0_PIN 4U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_D0_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORT1_18 (coord G4), CAM_PDWN
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_PDWN_GPIO GPIO1                /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_PDWN_GPIO_PIN 18U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_PDWN_GPIO_PIN_MASK (1U << 18U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_PDWN_PORT PORT1                /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_PDWN_PIN 18U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_PDWN_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORT1_19 (coord G5), CAM_RST
  @{ */

/* Symbols to be used with GPIO driver */
#define SMARTDMACAMERAPINS_CAM_RST_GPIO GPIO1                /*!<@brief GPIO peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_RST_GPIO_PIN 19U              /*!<@brief GPIO pin number */
#define SMARTDMACAMERAPINS_CAM_RST_GPIO_PIN_MASK (1U << 19U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define SMARTDMACAMERAPINS_CAM_RST_PORT PORT1                /*!<@brief PORT peripheral base pointer */
#define SMARTDMACAMERAPINS_CAM_RST_PIN 19U                   /*!<@brief PORT pin number */
#define SMARTDMACAMERAPINS_CAM_RST_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void SmartDMACameraPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
