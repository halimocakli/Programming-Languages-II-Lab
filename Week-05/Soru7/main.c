#include <stdio.h>
#include <stdlib.h>

int* Merge(const int*, const int*, int, int);
void Sort(int*, int);
void Print(const int*, int);

int main()
{
	int firstArray[5] = {2, 4, 6, 8, 10};
	int secondArray[6] = {1, 3, 5, 7, 9, 11};

	int* firstArrayPtr;
	int* secondArrayPtr;
	int* mergedArrayPtr;

	firstArrayPtr = firstArray;
	secondArrayPtr = secondArray;

	mergedArrayPtr = Merge(firstArrayPtr, secondArrayPtr, 5, 6);
	Sort(mergedArrayPtr, 11);
	Print(mergedArrayPtr, 11);

	return 0;
}

int* Merge(const int* _firstArray, const int* _secondArray, const int _size1, const int _size2)
{
	int i;
	int j;

	int* _mergedArray = (int*)calloc((_size1 + _size2), sizeof(int));

	for (i = 0; i < _size1; i++)
	{
		*(_mergedArray + i) = *(_firstArray + i);
	}

	for (j = 0; j < _size2; i++, j++)
	{
		*(_mergedArray + i) = *(_secondArray + j);
	}

	return _mergedArray;
}

void Sort(int* _mergedArray, int size)
{
	int i;
	int j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (_mergedArray[j] > _mergedArray[i])
			{
				temp = _mergedArray[i];
				_mergedArray[i] = _mergedArray[j];
				_mergedArray[j] = temp;
			}
		}
	}
}

void Print(const int* _mergedArray, int size)
{
	for (int i = 0; i < 11; i++)
	{
		printf("%d\n", *(_mergedArray + i));
	}
}
