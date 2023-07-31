#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This actually adds a new node at the end of a linked list
 * @head: This actually double points to the list_t list
 * @str: This is actually the string to put in the new node
 *
 * Return: This is the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *yew;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	yew = malloc(sizeof(list_t));
	if (!yew)
		return (NULL);

	yew->str = strdup(str);
	yew->len = len;
	yew->next = NULL;

	if (*head == NULL)
	{
		*head = yew;
		return (yew);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = yew;

	return (yew);
}
