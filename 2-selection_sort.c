#include <stdio.h>
#include "sort.h"
#include <string.h>

/**
 * selection_sort_list - selection sorts an array
 *
 * @array: array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int current_min;
	size_t current_min_idx;
	size_t start_pt;
	size_t curr_element_idx;
	size_t temp;

	for (start_pt = 0; start_pt < size; start_pt++)
	{
		current_min = array[start_pt];
		for (curr_element_idx = start_pt ; curr_element_idx < size ; curr_element_idx++)
		{
			if (array[curr_element_idx] < current_min )
			{
				current_min = array[curr_element_idx];
				current_min_idx = curr_element_idx;
			}
		}
		if (current_min != array[start_pt])
		{
			temp = array[start_pt];
			array[start_pt] = array[current_min_idx];
			array[current_min_idx] = temp;
			print_array(array, size);
		}
	}
}
