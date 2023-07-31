#include "lists.h"

/**
 * add_nodeint - This adds a new node at the beginning of a linked list
 * @head: THis is the pointer to the first node in the list
 * @n: This is the data to insert in that new node
 *
 * Return: This is the pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *sew;

	sew = malloc(sizeof(listint_t));
	if (!sew)
		return (NULL);

	sew->n = n;
	sew->next = *head;
	*head = sew;

	return (sew);
}
