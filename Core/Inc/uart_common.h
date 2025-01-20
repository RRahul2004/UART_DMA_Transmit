/*
 * uart_common.h
 *
 *  Created on: Nov 14, 2024
 *      Author: Rahul
 */
#include <main.h>
#ifndef INC_UART_COMMON_H_
#define INC_UART_COMMON_H_
# define MAX_PACKET_SIZE 255
# define PACKET_SIZE 3
# define DATA_SIZE 27
	struct data {
			double x_coord;
			double y_coord;
			double z_coord;

			uint8_t control;
	};
	struct connection {
			uint8_t packet_size;
			uint8_t num_of_packets;
			uint8_t total_size;
			uint8_t crc;
			uint8_t handshake;
	};

	uint8_t calculate_crc(uint8_t* buffer, const size_t data_length);




#endif /* INC_UART_COMMON_H_ */
