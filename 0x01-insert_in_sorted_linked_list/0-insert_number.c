#include "lists.h"
/**
 * insert_node - Inserts a number into a sorted singly-linked list²
 * @head: Head pointer
 * @number: insert number
 * Return: 0
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode, *heads;

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = number;
	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}
	heads = *head;
	if (number < heads->n)
	{
		newnode->next = heads;
		*head = newnode;
		return (newnode);
	}
	while (heads->next && number > heads->next->n)
	{
		heads = heads->next;
	}
	newnode->next = head2->next;
	heads->next = newnode;
	return (newnode);
}
