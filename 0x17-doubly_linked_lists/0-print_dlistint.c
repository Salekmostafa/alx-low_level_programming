#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - A function that prints a doubly linked list
 * @h: head of doubly linked list
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
