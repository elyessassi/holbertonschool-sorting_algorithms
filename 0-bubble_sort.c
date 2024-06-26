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
	size_t i = size;
	size_t j;

	for (i = 0 ; i < size; i++)
	{
		for (j = 0 ; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
