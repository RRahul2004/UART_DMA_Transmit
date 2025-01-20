/*
 * uart_transmit.h
 *
 *  Created on: Dec 7, 2024
 *      Author: Rahul
 */

#ifndef INC_UART_TRANSMIT_H_
#define INC_UART_TRANSMIT_H_

#include <uart_common.h>


void dataToBuffer(struct data data,uint8_t tx_buffer[DATA_SIZE]);
#endif /* INC_UART_TRANSMIT_H_ */
