#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * len - get length of linked list
 * @head: head
 * Return: length
 */

int len(listint_t *head)
{
	listint_t *p = head;
	int i = 0;

	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return (i);
}

int *convert_array(listint_t *head)
{
	int l = len(head);
	int *arr = malloc(sizeof(char) * l);
	int i = 0;
	listint_t *p = head;

	while (p != NULL)
	{
		arr[i] = p->n;
		p = p->next;
		i++;
	}
	return (arr);
}

int is_palindrome(listint_t **head)
{
	int *p;
	int i, l, flag;

	if (*head == NULL)
		return (1);
	p = convert_array(*head);
	l = len(*head);
	for (i = 0; i < l / 2; i++)
	{
		if (p[i] != p[l - i - 1])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return (0);
	return (1);
}
