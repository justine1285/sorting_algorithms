#include "sort.h"

/**
 * insertion_sort_list - function sorts a doubly linked list using
 * the insertion sort alogorithm
 * @list: pointer to a pointer to head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *next, *prev;

	if (!list)
		return;

	current = (*list)->next;
	while (current)
	{
		tmp = current;
		current = current->next;

		while (tmp->prev && (tmp->n < tmp->prev->n))
		{
			prev = tmp->prev;
			next = tmp->next;

			if (prev->prev)
				prev->prev->next = tmp;
			else
				*list = tmp;

			tmp->prev = prev->prev;
			tmp->next = prev;
			prev->prev = tmp;
			prev->next = next;

			if (next)
				next->prev = prev;

			print_list(*list);
		}
	}
}

