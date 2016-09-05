#ifndef InsertionSort_h
#define InsertionSort_h

#include <stdio.h>
void InsertionSort(int array[], int len)
{
	int temp = 0, j = 0;
	
	for (int i = 1; i < len; i++)
	{
		temp = array[i];

		for (j = i ; j > 0; j--)//j�ķ�Χ [1~i]����ѭ����ʼ��ָ�������������
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

		for (j = i-1; j >=0 ; j--)//j�ķ�Χ [0~i-1]���൱���ڴ��Ƚ�����ɨ��
		{
			if (temp < array[j])
				array[j+1] = array[j];
			else
				break;//��temp>array[j]��������Ӧλ��array[j]��
		}
		array[j+1] = temp;
	}
}
#endif