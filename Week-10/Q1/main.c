/* Klavyeden -1 girilene kadar verilen tek sayıları tek bağlı doğrusal bir listenin başına,
 * verilen çift sayıları ise listenin sonuna ekleyen programı yazınız. */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int number;
	struct node* next;
};
typedef struct node NODE;

NODE* Create(int);
void AddToHead(int);
void AddToTail(int);
void PrintList();

NODE* head = NULL;

int main()
{
	int number;

	do
	{
		printf("Insert a number: ");
		scanf("%d", &number);

		if (number == -1)
		{
			printf("\nProgram has ended successfully.");
		}
		else if (number % 2 == 0)
		{
			AddToTail(number);
		}
		else
		{
			AddToHead(number);
		}
	} while (number != -1);
	PrintList();
}

NODE* Create(int number)
{
	NODE* newNode = (NODE*)malloc(sizeof(NODE));

	newNode->number = number;
	newNode->next = NULL;

	return newNode;
}

void AddToHead(int number)
{
	NODE* addedNode = Create(number);

	if (head == NULL)
	{
		head = addedNode;
	}
	else
	{
		NODE* tempHead = head;
		head = addedNode;
		head->next = tempHead;
	}
}

void AddToTail(int number)
{
	NODE* addedNode = Create(number);

	if (head == NULL)
	{
		head = addedNode;
	}
	else
	{
		NODE* tempTail = head;

		while (tempTail->next != NULL)
		{
			tempTail = tempTail->next;
		}

		tempTail->next = addedNode;
	}
}

void PrintList()
{
	printf("\n *************************************************************\n");

	NODE* tempHead = head;

	while (tempHead != NULL)
	{
		printf(" %d -> ", tempHead->number);
		tempHead = tempHead->next;
	}
	printf(" NULL");
	printf("\n *************************************************************\n");
}