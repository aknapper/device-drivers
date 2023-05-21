/*
 * tmp102_deviceDriver.h
 *
 *  Created on: May 20, 2023
 *      Author: aknapper
 *
 *      https://www.ti.com/lit/ds/symlink/tmp102.pdf
 */

#include <stdint.h>
#include <Stdbool.h>

#ifndef TMP102_DEVICEDRIVER_H_
#define TMP102_DEVICEDRIVER_H_

#define I2C_ADDR_A0_GROUND	0x48
#define I2C_ADDR_A0_V		0x49
#define I2C_ADDR_A0_SDA		0x4A
#define I2C_ADDR_A0_SCL		0x4B

#define TEMPERATURE_REG	0x00
#define CONFIG_REG		0x01
#define T_LOW_REG		0x02
#define T_HIGH_REG		0x03

#define OS_BIT 	7
#define R1_BIT 	6
#define R0_BIT 	5
#define F1_BIT 	4
#define F0_BIT 	3
#define POL_BIT 2
#define TM_BIT 	1
#define SD_BIT	0

#define CR1_BIT	7
#define CR2_BIT	6
#define AL_BIT	5
#define EM_BIT	4

float byteStreamToDegrees( uint8_t byteArray[] );

#endif /* TMP102_DEVICEDRIVER_H_ */
