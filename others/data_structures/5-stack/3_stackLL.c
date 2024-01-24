#include <stdio.h>
#include <stdlib.h>

/* stackin linked list olarak kullanılması ve operasyonları */

// Node structure for the linked list
struct Node
{
	int data;
	struct Node *next;
};

// Top of the stack
struct Node *top = NULL;

// Checks if the stack is empty
int isEmpty()
{
	return top == NULL;
}

// Push operation
void push(int value)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->next = top;
	top = newNode;
}

// Pop operation
int pop()
{
	if (isEmpty())
	{
		printf("Stack underflow\n");
		exit(1);
	}
	int value = top->data;
	struct Node *temp = top;
	top = top->next;
	free(temp);
	return value;
}

// Peek operation
int peek()
{
	if (isEmpty())
	{
		printf("Stack underflow\n");
		exit(1);
	}
	return top->data;
}

// Returns the size of the stack
int size()
{
	int count = 0;
	struct Node *temp = top;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

void printStack(struct Node *top)
{
	if (top == NULL)
	{
		printf("Stack is empty\n");
		return;
	}
	struct Node *temp = top;
	printf("stack: ");
	while (temp != NULL)
	{
		printf("[%d]", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{
	// Testing the stack operations
	push(10);
	push(20);
	push(30);
	printStack(top);
	printf("Size of stack: %d\n", size());
	printf("Top element: %d\n", peek());
	printf("Popped element: %d\n", pop());
	printStack(top);
	printf("Top element: %d\n", peek());
	printf("Popped element: %d\n", pop());
	printStack(top);
	printf("Top element: %d\n", peek());
	printf("Popped element: %d\n", pop());
	printf("Is stack empty? %d\n", isEmpty());
	return 0;
}
