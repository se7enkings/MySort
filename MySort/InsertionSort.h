#ifndef InsertionSort_h
#define InsertionSort_h

#include <stdio.h>
void InsertionSort(int array[], int len)
{
	int temp = 0, j = 0;
	
	for (int i = 1; i < len; i++)
	{
		temp = array[i];

		for (j = i ; j > 0; j--)//j的范围 [1~i]，在循环开始是指定待插入的数，
		{
			if (temp<array[j-1])
				array[j] = array[j-1];
			else
				break;
		}
		array[j] = temp;
	}
}

void InsertionSort2(int array[], int len)
{
	int temp = 0, j = 0;

	for (int i = 1; i < len; i++)
	{
		temp = array[i];

		for (j = i-1; j >=0 ; j--)//j的范围 [0~i-1]，相当于在待比较区内扫描
		{
			if (temp < array[j])
				array[j+1] = array[j];
			else
				break;//若temp>array[j]，则插入点应位于array[j]后
		}
		array[j+1] = temp;
	}
}
#endif