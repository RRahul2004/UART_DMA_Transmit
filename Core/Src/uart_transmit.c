/*
 * uart_transmit.c
 *
 *  Created on: Dec 7, 2024
 *      Author: Rahul
 */

#include <uart_transmit.h>
void dataToBuffer(struct data data,uint8_t tx_buffer[DATA_SIZE]){
	uint8_t* ptr = &data;
	  	for (int i =0; i <DATA_SIZE; i++){
	  		tx_buffer[i]= *ptr;
	  		ptr++;
	  	}
	  	return;
}


