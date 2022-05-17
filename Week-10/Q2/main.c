/* Tek bağlı doğrusal listelerde listenin sonundaki düğümü keserek listenin başına ekleyen program. */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>    /* Linux işletim sisteminde sleep() fonksiyonunu kullanmamızı sağlayan kütüphane */

struct node {
	int number;
	struct node* next;
};
typedef struct node NODE;

NODE* Create(int);
void AddToList(int);
void CutTailAddHead();
void PrintList();

NODE* head = NULL;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		AddToList(i);
	}

	for (int i = 0; i < 11; ++i)
	{
		PrintList();
		CutTailAddHead();
		sleep(1);
	}

	return 0;
}

NODE* Create(int number)
{
	NODE* newNode = (NODE*)malloc(sizeof(NODE));

	newNode->number = number;
	newNode->next = NULL;

	return newNode;
}

void AddToList(int number)
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

void CutTailAddHead()
{
	NODE* tempHead = head;
	NODE* tempTail = head;
	while (tempTail->next->next != NULL)
	{
		tempTail = tempTail->next;
	}

	NODE* addedNode = Create(tempTail->next->number);
	head = addedNode;
	head->next = tempHead;

	tempTail->next = NULL;
}

void PrintList()
{
	printf("\n ****************************************************************\n");

	NODE* tempHead = head;

	while (tempHead != NULL)
	{
		printf(" %d -> ", tempHead->number);
		tempHead = tempHead->next;
	}
	printf(" NULL");
	printf("\n ****************************************************************\n");
}