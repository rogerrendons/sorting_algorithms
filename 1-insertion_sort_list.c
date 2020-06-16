#include "sort.h"

/**
  * insertion_sort_list - insert sort list
  * @list: pointer
  */

void insertion_sort_list(listint_t **list)
{
	listint_t *Order;

	if (!list || !*list || !(*list)->next)
		return;

	Order = (*list)->next;
	while (Order)
	{

		while (Order->prev && Order->prev->n > Order->n)
		{
			if (Order->next)
				Order->next->prev = Order->prev;
			Order->prev->next = Order->next;
			Order->next = Order->prev;
			Order->prev = Order->prev->prev;
			Order->next->prev = Order;
			if (!(Order->prev))
				*list = Order;
			else
				Order->prev->next = Order;
			print_list(*list);
		}
		Order = Order->next;
	}
}
