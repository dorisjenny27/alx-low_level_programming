#include "lists.h"

/**
 * pop_listint - This actually deletes the head node of a linked list
 * @head: This pointes to the first element in the linked list
 *
 * Return: This is the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int bum;

	if (!head || !*head)
		return (0);

	bum = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (bum);
}
