#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list²
 * @head: Head pointer
 * @number: insert number
 * Return: 0
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *heads = NULL;

	if (*head == NULL)
		return (add_nodeint_end(head, number));
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if ((*head)->n > number)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	else if ((*head)->n < number)
	{
		heads = *head;
	while (heads->next != NULL)
	{
		if (heads->next->n > number)
			{
			new->next = heads->next;
			heads->next = new;
			return (new);
			}
		heads = heads->next;
	}
	}
	return (add_nodeint_end(head, number));
}
