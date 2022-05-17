/*
 * Bir bağlı doğrusal listelerde listenin ortasında yer alan elemanı silen (tuttuğu alanı belleğe geri iade eden) bir
 * fonksiyon yazınız (Liste 100 elemanlı ise 50. elamanı, 101 elemanlı ise 51. elemanı silecek şekilde). Fonksiyon
 * parametre olarak bir liste alıp güncellenen listeyi geri döndürecektir.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node {
	int data;
	struct node* next;
};
typedef struct node NODE;

NODE* Create(int);
NODE* AddToList(NODE*, int);
NODE* DeleteMidpoint(NODE*, int);
void PrintList(NODE*);

int main()
{
	srand(time(NULL));
	NODE* head = NULL;
	int number;
	int midpoint;

	printf("\nType the number of elements in the list that you want to add: ");
	scanf("%d", &number);

	if (number % 2 == 0)
		midpoint = number / 2;
	else
		midpoint = (number + 1) / 2;

	for (int i = 0; i < number; i++)
	{
		head = AddToList(head, rand() % 101);
	}

	PrintList(head);
	head = DeleteMidpoint(head, midpoint);
	PrintList(head);
	return 0;
}

NODE* Create(int number)
{
	NODE* newNode = (NODE*)malloc(sizeof(NODE));

	newNode->data = number;
	newNode->next = NULL;

	return newNode;
}

NODE* AddToList(NODE* head, int number)
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
	return head;
}

NODE* DeleteMidpoint(NODE* head, int midpoint)
{
	int count = 1;
	NODE* tempHead = head;

	while (count != midpoint - 1)
	{
		tempHead = tempHead->next;
		count++;
	}

	NODE* tempMid = tempHead->next;
	tempHead->next = tempMid->next;

	printf(" The midpoint element of the list is %d", tempMid->data);
	free(tempMid);

	return head;
}

void PrintList(NODE* head)
{
	printf("\n ****************************************************************\n");

	NODE* tempHead = head;

	while (tempHead != NULL)
	{
		printf(" %d -> ", tempHead->data);
		tempHead = tempHead->next;
	}
	printf(" NULL");
	printf("\n ****************************************************************\n");
}