#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

/* linked list implementation of queueue */

// create it
typedef struct queue
{
	int items[MAX_SIZE];
	int front;
	int rear;
} Queue;

// initialize it
void init(Queue *q)
{
	q->front = -1;
	q->rear = -1;
}

int is_full(Queue *q)
{
	return q->rear == MAX_SIZE - 1;
}

int is_empty(Queue *q)
{
	return q->front == -1 && q->rear == -1;
}

// Adds (or stores) an element to the end of the queue
void enqueue(Queue *q, int data)
{
	if (is_full(q))
	{
		printf("Queue is full\n");
	}
	else if (is_empty(q))
	{
		q->front = q->rear = 0;
		q->items[q->rear] = data;
	}
	else
	{
		q->rear++;
		q->items[q->rear] = data;
	}
}

int dequeue(Queue *q)
{
	int data = -1;

	if (is_empty(q))
		printf("Queue is empty\n");

	else if (q->front == q->rear)
	{
		data = q->items[q->front];
		q->front = q->rear = -1;
	}

	else
	{
		data = q->items[q->front];
		q->front++;
	}

	return data;
}

int peek(Queue *q)
{
	if (is_empty(q))
	{
		printf("Queue is empty\n");
		return -1;
	}
	else
	{
		return q->items[q->front];
	}
}

void print_queue(Queue *q)
{
	if (is_empty(q))
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Queue: ");
		for (int i = q->front; i <= q->rear; i++)
		{
			printf("[%d]", q->items[i]);
		}
		printf("\n");
	}
}

int rear(Queue *q)
{
	if (is_empty(q))
	{
		printf("Queue is empty\n");
		return -1;
	}
	else
		return q->items[q->rear];
}

int main()
{
	Queue q;
	init(&q);

	// Enqueue some elements
	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	enqueue(&q, 40);

	// Print the queue
	print_queue(&q);

	// Dequeue some elements
	printf("Dequeued element: %d\n", dequeue(&q));
	printf("Dequeued element: %d\n", dequeue(&q));

	// Print the queue again
	print_queue(&q);

	// Peek at the front element
	printf("Front element: %d\n", peek(&q));

	// rear element
	printf("Rear element: %d\n", rear(&q));

	return 0;
}
