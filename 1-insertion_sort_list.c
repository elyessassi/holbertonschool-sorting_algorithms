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
	listint_t *temp;
	listint_t *sorted = NULL;
	listint_t *head;

	while (*list != NULL)
	{
		*list = (*list)->next;
		if (sorted == NULL)
		{
			sorted = *list;
			head = sorted;
		}
		else
		{
			sorted = sorted->next;
			while (sorted->prev != NULL)
			{
				if (sorted->n < sorted->prev->n)
				{
					if (sorted->prev->prev == NULL)
					{
						
					}
				}
			}
		}
	}
}
