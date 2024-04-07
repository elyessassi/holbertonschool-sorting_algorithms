#include "sort.h"

/**
 * partition - Partitions the array and returns the pivot index
 * @array: The array to be partitioned
 * @low: The starting index of the array or subarray
 * @high: The ending index of the array or subarray
 * @length: The length of the array
 * Return: The index of the pivot element
 */


int partition(int *array, int low, int high, size_t length)
{
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= array[high])
		{
			i++;
			if (i < j)
			{
				swap(&array[i], &array[j]);
				print_array(array, length);
			}
		}
	}
	if (array[i + 1] > array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, length);
	}
		return (i + 1);
}

/**
 * swap - Swaps the values of two ints
 * @i: Pointer to the first int
 * @j: Pointer to the second int
 */


void swap(int *i, int *j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}


/**
 * quick_sort_recursion - Recursively sorts an array
 * using Quick Sort algorithm
 * @array: The array to be sorted
 * @low: The starting index of the array or subarray
 * @high: The ending index of the array or subarray
 * @length: The length of the array
 */


void quick_sort_recursion(int *array, int low, int high, size_t length)
{
	int pivot_index;

	if (low >= high)
		return;
	pivot_index = partition(array, low, high, length);
	quick_sort_recursion(array, low, pivot_index - 1, length);
	quick_sort_recursion(array, pivot_index + 1, high, length);
}


/**
 * quick_sort - Sorts an array of integers in ascending order using Quick Sort
 * @array: The array to be sorted
 * @length: The length of the array
 */


void quick_sort(int *array, size_t length)
{
	quick_sort_recursion(array, 0, length - 1, length);
}