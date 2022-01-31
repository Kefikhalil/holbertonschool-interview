#include "binary_trees.h"


/**
 * the_node - last node
 *
 * @root: pointer
 *
 * Return: 0
 */

heap_t *the_node(heap_t *root)
{
	heap_t *queue[100];
	heap_t *strider = root;
	int enter = 0, exit = 0;

	if (!strider)
		return (NULL);
	while (strider->l && strider->r)
	{
		queue[enter] = strider->l;
		enter += 1;
		if (enter >= 99)
			enter = 0;
		queue[enter] = strider->r;
		enter += 1;
		if (enter >= 99)
			enter = 0;
		strider = queue[exit];
		exit += 1;
		if (exit >= 99)
			exit = 0;
	}
	if (strider->l)
		return (strider->l);
	if (exit == 0)
		return (queue[98]->r);
	return (queue[exit - 1]->r);
}

/**
 * binary_heap -  binary heap
 *
 * @root: root
 *
 * Return: 0
 */

void binary_heap(heap_t *root)
{
	heap_t *kill = root;
	int l, r;

	while (kill->l)
	{
		l = (kill->l)->n;
		if (kill->r)
		{
			r = (kill->r)->n;
			if (kill->n >= l && kill->n >= r)
				break;
			if (r > l)
			{
				(kill->r)->n = kill->n;
				kill->n = r;
				kill = kill->r;
			}
			else
			{
				(kill->l)->n = kill->n;
				kill->n = l;
				kill = kill->l;
			}
		}
		else
		{
			if (kill->n >= l)
				break;
			(kill->l)->n = kill->n;
			kill->n = l;
		}
	}

}


/**
 * heap_extract - extract root
 *
 * @root: root
 *
 * Return: 0
 */

int heap_extract(heap_t **root)
{
	heap_t *c = NULL, *move = NULL;
	int temp;

	if (!root || !*root)
		return (0);
	c = *root;
	move = the_node(*root);
	if (move->parent)
	{
		if ((move->parent)->r)
			(move->parent)->r = NULL;
		else
			(move->parent)->l = NULL;
		move->parent = NULL;
	}
	move->l = c->l;
	move->r = c->r;
	*root = move;
	binary_heap(move);
	temp = c->n;
	free(c);
	return (temp);
}
