/*
 * homework4.h
 *
 *  Created on: 04/09/2020
 *      Author: Hamud Hamud
 */

#ifndef HOMEWORK4_H_
#define HOMEWORK4_H_

// This function initializes the board by turning off the Watchdog Timer.
void initBoard();
bool charFSM(char rChar);

// TODO: Define any constants that are local to homework.c using #define
typedef enum {SX, S2, S25, S253, S2534} char_state_t;


#endif /* HOMEWORK4_H_ */
