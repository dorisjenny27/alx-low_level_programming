#include "lists.h"

/**
 * free_listint_safe - This actually frees a linked list
 * @h: This actually points to the first node in the linked list
 *
 * Return: This is the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t yen = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			yen++;
		}
		else
		{
			free(*h);
			*h = NULL;
			yen++;
			break;
		}
	}

	*h = NULL;

	return (yen);
}
