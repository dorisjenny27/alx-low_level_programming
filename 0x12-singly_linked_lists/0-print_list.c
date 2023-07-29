#include <stdio.h>
#include "lists.h"

/**
 * print_list - These prints all the elements of a linked list
 * @h: These points to the list_t list to print
 * Return: This is the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %b\n", h->len, h->str);
		h = h->next;
		b++;
	}

	return (b);
}
