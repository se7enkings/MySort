//
//  ShellSort.hpp
//  MySort
//
//  Created by ShiyiLiang on 16/9/1.
//  Copyright © 2016年 ShiyiLiang. All rights reserved.
//

#ifndef ShellSort_h
#define ShellSort_h

#include <stdio.h>

void ShellSort(int array[], int len)
{
	int temp = 0, j = 0;

	for (int div = len / 2; div >= 1; div /= 2)
	{
		for (int loop = 0; loop < div; loop++)//遍历各个组
		{

			for (int i = loop + div; i < len; i += div)//遍历当前组内的各个数
			{
				temp = array[i];
				for (j = i; j >= div; j -= div) //j > div - 1 => j - div > -1 => j-div => 0
				{
					if (temp < array[j - div])
						array[j] = array[j - div];
					else
						break;
				}
				array[j] = temp;//插入
			}
		}
	}
}
#endif /* ShellSort_h */