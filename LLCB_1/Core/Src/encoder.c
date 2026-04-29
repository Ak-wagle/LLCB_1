/*
 * encoder.c
 *
 *  Created on: 29-Apr-2026
 *      Author: Aniruddha Wagle K
 */

#include "main.h"
#include "encoders.h"

int16_t getRightEncoderCount() {
	return (int16_t) TIM1->CNT;
}

int16_t getLeftEncoderCount() {
	return (int16_t) TIM2->CNT;
}

void resetEncoders() {
	TIM1->CNT = (int16_t) 0;
	TIM2->CNT = (int16_t) 0;
}

