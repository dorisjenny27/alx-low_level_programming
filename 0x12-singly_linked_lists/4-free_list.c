#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This outrightly frees a linked list
 * @head: list_t This is axctually the list to be freed
 */
void free_list(list_t *head)
{
	list_t *pump;

	while (head)
	{
		pump = head->next;
		free(head->str);
		free(head);
		head = pump;
	}
}
