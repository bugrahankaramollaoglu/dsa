#include <stdio.h>
#include <stdlib.h>

/* SINGLY LINKED LIST */

/* önceklikle bir liste yaratmak için struct yapısını kullanırız */
struct Node
{
	int data;		   // o node'un tutacağı veri
	struct Node *next; // bir sonraki nodeu gösteren pointer
};

/* baştan eklemek için listeyi taramamıza gerek yok, direkt
her zamanki gibi yeni bir node yaratip next/val değerlerini
atayip yeni head baştaki (ekledigimiz) node olacak şekilde
yeniden düzenliyoruz. */
void addFront(struct Node **head, int data)
{
	struct Node *new_node = malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next = *head;
	*head = new_node;
}

void addBack(struct Node **head, int data)
{
	struct Node *new_node = malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next = NULL;

	// burada !head dersek node'un ilk elemanı NULL mu yani liste boş mu değil,
	// ilk elemani gösteren pointer NULL mu diye kontrol etmiş olurduk,
	// ama onu istemiyoruz o yüzden !*head diyoruz
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		// sondan ekleyeceğimiz için sona kadar gitmemiz lazım
		struct Node *temp_node = *head;
		// bir diğer hata if(temp_node) demek. kendisinin NULL olup olmadıgını degil
		// son node olup olmadıgını kontrol ediyoruz, unutma
		while (temp_node->next)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;
	}
}

// prev nodeundan hemen sonra newData'lı yeni node ekleme
void addAfter(struct Node *prev, int newData)
{
	if (!prev)
		return;
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = newData;
	newNode->next = prev->next;
	prev->next = newNode;
}

void deleteFront(struct Node **head)
{
	if (!head || !*head) // iki şey kontrol eder. birincisi head node'unun kendisi NULL mu
		return;			 // ikincisi gösterdiği node null mu
	else
	{
		struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}

void deleteBack(struct Node **head)
{
	if (*head == NULL)
	{
		printf("liste zaten boş\n");
		return;
	}
	// if there is 1 element
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return;
	}
	else
	{
		struct Node *temp_node = *head;
		while (temp_node->next->next != NULL)
		{
			temp_node = temp_node->next;
		}
		free(temp_node->next);
		temp_node->next = NULL;
	}
}

/* delete the node with a spesific data */
void deleteData(struct Node **headRef, int data)
{
	// Check if the list is empty
	if (*headRef == NULL)
		return;

	// Traverse the list and delete nodes with matching data value
	struct Node *current = *headRef;
	struct Node *prev = NULL;
	while (current != NULL)
	{
		if (current->data == data)
		{
			// Delete the current node
			if (prev == NULL)
			{
				// If the current node is the head of the list
				*headRef = current->next;
				free(current);
				current = *headRef;
			}
			else
			{
				// If the current node is not the head of the list
				prev->next = current->next;
				free(current);
				current = prev->next;
			}
		}
		else
		{
			// Move to the next node in the list
			prev = current;
			current = current->next;
		}
	}
}

/* delete the node at a spesific indice */
void deleteIndice(struct Node **head, int pos)
{
	struct Node *temp = *head; // Creating a temporary
							   // variable pointing to head
	int i;
	if (pos == 0)
	{
		(*head) = (*head)->next; // Advancing the head pointer
		temp->next = NULL;
		free(temp); // Node is deleted
	}
	else
	{
		for (i = 0; i < pos - 1; i++)
		{
			temp = temp->next;
		}
		// Now temp pointer points to the previous node of
		// the node to be deleted
		struct Node *del = temp->next; // del pointer points to the node
									   // to be deleted
		temp->next = temp->next->next;
		del->next = NULL;
		free(del); // Node is deleted
	}
	return;
}

int listLen(struct Node **head)
{
	struct Node *temp = *head;
	int counter = 0;
	while (temp)
	{
		(temp) = (temp)->next;
		counter++;
	}
	return counter;
}

int searchNode(struct Node *head, int x)
{
	struct Node *current = head; // Initialize current
	while (current != NULL)
	{
		if (current->data == x)
			return 1;
		current = current->next;
	}
	return 0;
}

int nthNode(struct Node *head, int index)
{
	if (head == NULL)
		return -1;
	if (index == 0)
		return head->data;
	return nthNode(head->next, index - 1);
}

void reverseList(struct Node **head)
{
	struct Node *previous = NULL;
	struct Node *current = (*head);
	struct Node *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	(*head) = previous;
}

int sizeFinder(struct Node *head)
{
	int len = 0;
	while (head)
	{
		len++;
		head = head->next;
	}
	return len;
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

int main(void)
{
	struct Node *head = NULL;
	addFront(&head, 10);
	addFront(&head, 20);
	addFront(&head, 30);
	addFront(&head, 40);				  // 40(head) 30 20 10
	addAfter(head->next->next, 1000);	  // [45][30][15][1000][10]
	addBack(&head, 0);					  // [40][30][20][1000][10][0]
	deleteFront(&head);					  // [30][20][1000][10][0]
	deleteBack(&head);					  // [30][20][1000][10]
	deleteBack(&head);					  // [30][20][1000]
	deleteData(&head, 30);				  // [20][1000]
	printf("%d\n", listLen(&head));		  // 2
	printf("%d\n", searchNode(head, 20)); // 1
	printf("%d\n", searchNode(head, 50)); // 0
	printf("%d\n", nthNode(head, 1));	  // 1000
	addFront(&head, 3);
	addFront(&head, 5);
	addFront(&head, 7);					   // [7][5][3][20][1000]
	deleteIndice(&head, 3);				   // [7][5][3][1000]
	reverseList(&head);					   // [1000][3][5][7]
	addFront(&head, 1234);				   // [1234][1000][3][5][7]
	int size = sizeFinder(head);		   // boyut buluyoruz
	printf("listenin boyutu: %d\n", size); // 5 çıkıyor
	printList(head);
}

/* eğer structı tanımlarken

struct Node
{
	int data;
	struct Node *next;
} *top = NULL;

şeklinde tanımlarsan daha sonra mainde
<struct Node *head> satırına ihtiyaç duymadan direkt
addFront(&top, 10) diyerek kullanabilirsin  */
