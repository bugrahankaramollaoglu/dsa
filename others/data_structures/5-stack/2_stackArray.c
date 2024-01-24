#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* stackin array olarak kullanılması ve operasyonları */

int myStack[SIZE]; // 5 elemanlı bir stack yarattık.
int top = -1;	   // top stackin mevcut indisini tutacak

// eleman ekler
void push(int nb)
{
	if (top == SIZE - 1)
	{
		printf("stack overflow");
		return;
	}
	top++;
	myStack[top] = nb;
}

/* eleman siler (son eleman) ve sildigi elemanı döndürür */
int pop(void)
{
	int val;

	if (top == -1)
	{
		printf("stack underflow"); // stack boş ise
		exit(1);				   // abnormal termination diff from return 1
	}
	val = myStack[top];
	top--;
	return (val);
}

/* son elemanı döndürür */
int findTop()
{
	if (top == -1)
	{
		printf("stack underflow\n");
		exit(1);
	}
	return myStack[top];
}

int peek()
{
	return myStack[top];
}

/* stackin eleman sayısını döndürür */
int size() { return (top + 1); }

void printStack(void)
{
	if (top == -1)
	{
		printf("stack is empty\n");
		exit(1);
	}
	else
	{
		for (int i = 0; i < top + 1; i++)
		{
			printf("[%d]", myStack[i]);
		}
	}
	printf("\n");
}

int main()
{
	push(10);
	push(20);
	push(30);
	printStack(); // [10][20][30]
	printf("SIZE: %d\n", size());
	printf("PEEK: %d\n", peek());
	pop();
	printStack(); // [10][20]
	printf("%d\n", findTop());
	push(100);
	push(200);
	printStack();
	printf("SIZE: %d\n", size());
}

/* bugra */
