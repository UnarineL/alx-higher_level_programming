#include "lists.h"

/**
 * check_cycle - checks if a singly-linked list contains a cycle
 * @list: a singly linked list
 *
 * Return: 0 if no cycle or 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *s, *f;

	if (list == NULL || list->next == NULL)
	{
		return (0);
	}
	s = list->next;
	f = list->next->next;

	while (s && f && f->next)
	{
		if (s == f)
		{
			return (1);
		}
		s = s->next;
		f = f->next->next;
	}
	return (0);
}
