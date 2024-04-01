#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - bubble sorts an array
 *
 * @array: array to be sorted
 * @size: size of array
 */

 void bubble_sort(int *array, size_t size)
 {
	int temp;
	int i = size;
	int j;

	for (i , i > 0, i-- )
	{
		for (j , j < i, j++ )
		{
			if (array[i] > array[i + 1])
			{
				array[i] = temp;
				array[i + 1] = array[i];
				temp = array[i + 1];
				print_array(array);
			}
		}
	}
 }