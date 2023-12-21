#include <stdio.h>
#include <stdlib.h>

/* DOUBLY LINKED LIST */

struct Node
{
	int data;
	struct Node *next; // Pointer to next node in DLL
	struct Node *prev; // Pointer to previous node in DLL
};

void addFront(struct Node **head, int new_data)
{
	struct Node *new_node = malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head);
	new_node->prev = NULL;
	if ((*head))
		(*head)->prev = new_node;
	(*head) = new_node;
}

void addEnd(struct Node **head_ref, int new_data)
{
	struct Node *new_node = malloc(sizeof(struct Node));
	struct Node *last = *head_ref;
	new_node->data = new_data;
	new_node->next = NULL;
	if (*head_ref == NULL)
	{
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
}

void addAfter(struct Node *prev_node, int new_data)
{
	if (prev_node == NULL)
	{
		printf("the given previous node cannot be NULL");
		return;
	}
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	new_node->prev = prev_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
}

void deleteNode(struct Node **head, struct Node *del)
{
	if (*head == NULL || del == NULL)
		return;
	// If node to be deleted is head node
	if (*head == del)
		*head = del->next;
	// Change next only if node to be deleted is NOT the last node
	if (del->next != NULL)
		del->next->prev = del->prev;
	// Change prev only if node to be deleted is NOT the first node
	if (del->prev != NULL)
		del->prev->next = del->next;
	// Free memory pointed by node to be deleted
	free(del);
}

void reverseList(struct Node **head_ref)
{
	struct Node *temp = NULL;
	struct Node *current = *head_ref;
	while (current != NULL)
	{
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}
	if (temp != NULL)
		*head_ref = temp->prev;
}

int listLen(struct Node *head)
{
	struct Node *temp = head;
	int counter = 0;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return counter;
}

void printList(struct Node *n)
{
	while (n)
	{
		printf("[%d]", n->data);
		n = n->next;
	}
	printf("\n");
}

int main()
{
	struct Node *head = NULL;
	addEnd(&head, 10);
	addEnd(&head, 20);
	addEnd(&head, 30);					 // [10][20][30]
	deleteNode(&head, head->next->next); // [10][20]
	printf("%d\n", listLen(head));
	printList(head);
}
