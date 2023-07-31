#include "lists.h"

/**
 * insert_nodeint_at_index - THis actually inserts a new node in a linked list,
 * at a given position
 * @head: This adequately points to the first node in the list
 * @idx: This index is where the new node is added
 * @n: This is the data to insert in the new node
 *
 * Return:This  points to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *yew;
	listint_t *temp = *head;

	yew = malloc(sizeof(listint_t));
	if (!yew || !head)
		return (NULL);

	yew->n = n;
	yew->next = NULL;

	if (idx == 0)
	{
		yew->next = *head;
		*head = yew;
		return (yew);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			yew->next = temp->next;
			temp->next = yew;
			return (yew);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
