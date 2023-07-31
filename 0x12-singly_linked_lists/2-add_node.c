#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This actually adds a new node at the beginning of a linked list
 * @head: This double points to the list_t list
 * @str: This is the new string to add in the node
 *
 * Return: This is the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *yew;
	unsigned int yen = 0;

	while (str[yen])
		yen++;

	yew = malloc(sizeof(list_t));
	if (!yew)
		return (NULL);

	yew->str = strdup(str);
	yew->yen = yen;
	yew->next = (*head);
	(*head) = yew;

	return (*head);
}
