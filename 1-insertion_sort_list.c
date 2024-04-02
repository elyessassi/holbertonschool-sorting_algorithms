#include <stdio.h>
#include "sort.h"
#include <string.h>

/**
 * insertion_sort_list - insertion sorts an array
 *
 * @list: array to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	int i;
	int temp;
	int j;

	for (i = 1; i < strlen(*list); i++)
	{
		temp = list->next->n;
		j = list ;
		while (j > 0)
		{
			if (temp < *list[j] )
			{
				*list[i] = *list[j];
				*list[j] = temp;
				print_list(*list);
			}
			j--;
		}
	}
}
