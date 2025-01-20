/*
 * transmit_queue.h
 *
 *  Created on: Nov 27, 2024
 *      Author: Rahul
 */
#include <uart_common.h>
#include <stdbool.h>
#include <main.h>
#ifndef SRC_TRANSMIT_QUEUE_H_
#define SRC_TRANSMIT_QUEUE_H_
#define MAX_QUEUE_SIZE 3

struct transmit_queue{
	struct data queue[MAX_QUEUE_SIZE];
	int front;
	int rear;
	uint8_t size;
};

void init_queue(struct transmit_queue *q);
bool is_full(struct transmit_queue *q);
bool enqueue(struct transmit_queue *q, struct data item);
bool dequeue(struct transmit_queue *q, struct data *item);


#endif /* SRC_TRANSMIT_QUEUE_H_ */
