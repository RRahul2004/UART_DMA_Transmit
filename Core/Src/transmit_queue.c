/*
 * transmit_queue.c
 *
 *  Created on: Nov 28, 2024
 *      Author: Rahul
 */
#include <transmit_queue.h>
#include <uart_common.h>
void init_queue(struct transmit_queue *q) {
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

// Function to check if the queue is empty
bool is_empty(struct transmit_queue *q) {
    return q->size == 0;
}

// Function to check if the queue is full
bool is_full(struct transmit_queue *q) {
    return q->size == MAX_QUEUE_SIZE;
}

// Function to enqueue an element
bool enqueue(struct transmit_queue *q, struct data item) {
    if (is_full(q)) {
        printf("Queue is full!\n");
        return false;
    }

    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;  // Move rear to the next position
    q->queue[q->rear] = item;                 // Add the new item
    q->size++;
    return true;
}

// Function to dequeue an element
bool dequeue(struct transmit_queue *q, struct data *item) {
    if (is_empty(q)) {
        printf("Queue is empty!\n");
        return false;
    }

    *item = q->queue[q->front];              // Retrieve the front item
    memset(&q->queue[q->front], 0, sizeof(struct data));
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;  // Move front to the next position
    q->size--;
    return true;
}

