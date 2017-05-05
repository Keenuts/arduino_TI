#pragma once

#include <avr/io.h>

#define OUT 1
#define IN  0

#define DATA_2 2
#define DATA_3 3
#define DATA_4 4
#define DATA_5 5
#define DATA_6 6
#define DATA_7 7
#define DATA_8 8
#define DATA_9 9
#define DATA_10 10
#define DATA_11 11
#define DATA_12 12
#define DATA_13 13

#define ANALOG_1 14
#define LED 13

void digitalWrite(uint8_t pin, uint8_t value);
uint8_t digitalRead(uint8_t pin);
void setDirection(uint8_t pin, uint8_t dir);

/*
 * direction: low = input | high = output
 * 
 *
 * PINS 8-13 | DIGITAL
 *
 * 		PORTB data			  RW
 * 		DDRB  direction   RW
 * 		DDB   direction port name
 * 		PINB  input       R-
 *
 * PINS 0-7 | DIGITAL
 * 		PORTD data				RW
 * 		DDRD  direction   RW
 * 		DDD   direction port name
 * 		PIND  input				R-
 *
 * PINS 0-5 | ANALOG
 * 		PORTC data				RW
 * 		DDRC  direction 	RW
 * 		DDC   direction port name
 * 		PINC  input 			R-
 *
 */
