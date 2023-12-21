#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void insertAtBegin(struct Node **head_ref, int new_data)
{

	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->next = *head_ref;

	if (*head_ref != NULL)
	{
		struct Node *last = *head_ref;
		while (last->next != *head_ref)
			last = last->next;
		last->next = new_node;
	}
	else
	{
		new_node->next = new_node;
	}

	*head_ref = new_node;
}

void insertAtEnd(struct Node **head_ref, int new_data)
{

	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->next = *head_ref;

	if (*head_ref != NULL)
	{
		struct Node *last = *head_ref;
		while (last->next != *head_ref)
			last = last->next;
		last->next = new_node;
	}
	else
	{
		new_node->next = new_node;
		*head_ref = new_node;
		return;
	}
}

void deleteNode(struct Node **head_ref, int key)
{

	if (*head_ref == NULL)
		return;

	struct Node *prev = NULL;
	struct Node *current = *head_ref;
	while (current->data != key)
	{
		if (current->next == *head_ref)
		{
			printf("Node with key %d not found\n", key);
			return;
		}
		prev = current;
		current = current->next;
	}

	if (current->next == *head_ref && prev == NULL)
	{
		*head_ref = NULL;
		free(current);
		return;
	}

	if (current == *head_ref)
	{
		prev = *head_ref;
		while (prev->next != *head_ref)
			prev = prev->next;
		*head_ref = current->next;
		prev->next = *head_ref;
		free(current);
	}
	else
	{
		prev->next = current->next;
		free(current);
	}
}

void printList(struct Node *head)
{
	struct Node *current = head;
	if (head != NULL)
	{
		do
		{
			printf("[%d]", current->data);
			current = current->next;
		} while (current != head);
	}
	printf("\n");
}

void deleteAtBegin(struct Node **head_ref)
{
	if (*head_ref == NULL)
		return;

	struct Node *last = *head_ref;
	while (last->next != *head_ref)
		last = last->next;

	if (*head_ref == last)
	{
		free(*head_ref);
		*head_ref = NULL;
		return;
	}

	struct Node *temp = *head_ref;
	*head_ref = (*head_ref)->next;
	last->next = *head_ref;
	free(temp);
}

void deleteAtEnd(struct Node **head_ref)
{
	if (*head_ref == NULL)
		return;

	struct Node *last = *head_ref;
	struct Node *second_last = NULL;
	while (last->next != *head_ref)
	{
		second_last = last;
		last = last->next;
	}

	if (*head_ref == last)
	{
		free(*head_ref);
		*head_ref = NULL;
		return;
	}

	second_last->next = *head_ref;
	free(last);
}

void insertAfter(struct Node **head_ref, int key, int new_data)
{

	if (*head_ref == NULL)
		return;

	struct Node *current = *head_ref;
	do
	{
		if (current->data == key)
		{

			struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

			new_node->data = new_data;
			new_node->next = current->next;
			current->next = new_node;

			if (current == *head_ref && new_node->next == *head_ref)
				*head_ref = new_node;
			return;
		}
		current = current->next;
	} while (current != *head_ref);
	printf("Node with key %d not found\n", key);
}

int main()
{
	struct Node *head = NULL;
	insertAtBegin(&head, 10);
	insertAtBegin(&head, 20);
	insertAtEnd(&head, 30);
	deleteNode(&head, 30);
	deleteAtBegin(&head);
	insertAtBegin(&head, 10);
	insertAtBegin(&head, 20);
	deleteAtEnd(&head);
	printList(head);
}
