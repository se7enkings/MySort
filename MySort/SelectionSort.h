#ifndef SelectionSorth
#define SelectionSort_h

#include <stdio.h>
void SelectionSort(int array[], int len)
{
	int temp = 0;
	int flag = 0;

	for (int i = 0; i < len - 1; i++)
	{
		flag = i;
		for (int j = i; j < len; j++)
		{
			if (array[flag]>array[j])
			{
				flag = j;
			}
		}
		if (flag!=i)
		{
			temp = array[flag];
			array[flag] = array[i];
			array[i] = temp;
		}
	}
}
#endif