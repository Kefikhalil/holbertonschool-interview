#include "lists.h"
/**
 * insert_node - Inserts a number into a sorted singly-linked list²
 * @head: Head pointer
 * @number: insert number
 * Return: 0
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode, *head2;

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
	head2 = *head;
	if (number < strider->n)
	{
		newnode->next = head2;
		*head = newnode;
		return (newnode);
	}
	while (head2->next && number > head2->next->n)
	{
		head2 = head2->next;
	}
	newnode->next = head2->next;
	head2->next = newnode;
	return (newnode);
}
