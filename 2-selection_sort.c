#include <stdio.h>
#include "sort.h"
#include <string.h>

/**
 * selection_sort_list - selection sorts an array
 *
 * @array: array to be sorted
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;
	int **ptr;

	for (i = 0; i < size; i++)
	{
		temp = array[i];
		for (j = i ; j < size - 1 ; j++)
		{
			if (array[j + 1] < array[j])
			{
				**ptr = *array[j+1];
			}
		}
		
		print_array(array, size);
	}
}