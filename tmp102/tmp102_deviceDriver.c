/*
 * tmp102_deviceDriver.c
 *
 *  Created on: May 20, 2023
 *      Author: aknapper
 */
#include <tmp102_deviceDriver.h>

float tmp102_resolution = 0.0625;

float byteStreamToDegrees( uint8_t byteArray[] ){
	float temp_c;
	uint16_t value = ((uint16_t)byteArray[0] << 4) |
				(byteArray[1] >> 4);

	// See datasheet S7.3.1 for temperature conversion from digital data
	// if negative temperature result (MSB = 1)
	if ( value > 0x7FF ){
	  	value |= 0xF000;
		value = ( ~value)+1;
		temp_c = value * tmp102_resolution * -1;
	}
	else{
		temp_c = value * tmp102_resolution;
	}
	return temp_c;
}
