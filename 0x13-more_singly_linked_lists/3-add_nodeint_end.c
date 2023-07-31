#include "lists.h"

/**
 * add_nodeint_end - This adds a node at the end of a linked list
 * @head: This points to the first element in the list
 * @n: This is the data to insert in the new element
 *
 * Return: This points to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *kew;
	listint_t *temp = *head;

	kew = malloc(sizeof(listint_t));
	if (!kew)
		return (NULL);

	kew->n = n;
	kew->next = NULL;

	if (*head == NULL)
	{
		*head = kew;
		return (kew);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = kew;

	return (kew);
}
