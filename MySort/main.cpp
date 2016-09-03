//
//  main.cpp
//  MySort
//
//  Created by ShiyiLiang on 16/9/1.
//  Copyright © 2016年 ShiyiLiang. All rights reserved.
//

#include <iostream>
#include "ShellSort.h"

int main(int argc, const char * argv[]) {
	// insert code here...

	int array[10] = { 9, 11, 6, 8, 75, 6, 3, 52, 44, 84 };
	int array2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int array3[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	ShellSort(array, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", array[i]);
	}

	while (true)
	{
	}
	return 0;
}
