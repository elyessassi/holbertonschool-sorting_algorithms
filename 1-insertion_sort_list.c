#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked
 * list of integers in ascending order
 * @list: list of integers to be sorted
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *slot, *prev, *curr;

	if (!list)
		return;

	curr = (*list)->next;
	while (curr)
	{
		slot = curr;
		prev = curr->prev;
		while (prev && slot->n < prev->n)
		{
			if (slot->next)
				slot->next->prev = prev;

			prev->next = slot->next;
			slot->prev = prev->prev;
			prev->prev = slot;
			slot->next = prev;

			if (!slot->prev)
				(*list) = slot;
			else
				slot->prev->next = slot;

			prev = slot->prev;
			print_list(*list);
		}
		curr = curr->next;
	}
}
