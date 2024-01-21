#include "sort.h"

/**
 * insertion_sort_list - function sorts a doubly linked list using
 * the insertion sort alogorithm
 * @list: pointer to a pointer to head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *next, *prev;

	if (!list)
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
		current = current->next;

		while (temp->prev && (temp->n < temp->prev->n))
		{
			prev = temp->prev;
			next = temp->next;

			if (prev->prev)
				prev->prev->next = temp;
			else
				*list = temp;

			temp->prev = prev->prev;
			temp->next = prev;
			prev->prev = temp;
			prev->next = next;

			if (next)
				next->prev = prev;

			print_list(*list);
		}
	}
}

