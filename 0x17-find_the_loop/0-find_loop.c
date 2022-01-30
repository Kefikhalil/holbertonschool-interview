#include "lists.h"


/**
 * find_listint_loop - find_listint_loop
 * @head: pointer
 *
 * Return: node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one, *two;

	if (!head)
		return (NULL);

	one = two = head;

	while (two && one && one->next)
	{
		two = two->next;
		one = (one->next)->next;
		if (one == two)
		{
			two = head;

			while (1)
			{
				if (two == one)
					return (two);

				two = two->next;
				one = one->next;
			}
		}
	}

	return (NULL);
}
