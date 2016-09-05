#ifndef BubbleSort_h
#define BubbleSort_h

#include <stdio.h>
void BubbleSort(int array[], int len)
{
	int temp = 0;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (array[j]>array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

void BubbleSortEx(int array[], int len)
{
	int temp = 0;
	bool exchange = false;
	for (int i = 0; i < len - 1; i++)
	{
		exchange = false;
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (array[j]>array[j + 1])
			{
				exchange = true;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		if (false == exchange)
			return;
	}
}

#endif