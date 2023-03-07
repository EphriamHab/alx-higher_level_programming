#include "lists.h"

/**
 * check_cycle - check a singly linked list has a cycle in it
 * @list: linked list
 * Return: 0 or 1
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	while (slow && fast  && fast->next)
	{
		slow = slow->next;
		fast  = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}
