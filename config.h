/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID 0xC6C6
#define PRODUCT_ID 0x6C6C
#define DEVICE_VER 0x0001
#define MANUFACTURER Mecx Labs
#define PRODUCT mp2 macropad

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define DIRECT_PINS \
    { {A9, A8, B15}, {B13, B1, B0}, {B14, A6, A5} }

#define ENCODERS_PAD_A { A10 }
#define ENCODERS_PAD_B { A13 }
#define ENCODER_RESOLUTION 2

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

/* I2C for OLED */
#define I2C_DRIVER I2CD2
#define I2C1_SCL_PIN        B10
#define I2C1_SDA_PIN        B11
#define I2C1_SCL_PAL_MODE   1
#define I2C1_SDA_PAL_MODE   1
#define I2C1_TIMINGR_PRESC  0U
#define I2C1_TIMINGR_SCLDEL 3U
#define I2C1_TIMINGR_SDADEL 1U
#define I2C1_TIMINGR_SCLH   3U
#define I2C1_TIMINGR_SCLL   9U