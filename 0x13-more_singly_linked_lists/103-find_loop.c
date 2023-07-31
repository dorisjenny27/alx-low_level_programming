#include "lists.h"

/**
 * find_listint_loop - This outrightly finds the loop in a linked list
 * @head: This is actually the linked list to search for
 *
 * Return: This is the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *glow = head;
	listint_t *gast = head;

	if (!head)
		return (NULL);

	while (glow && gast && gast->next)
	{
		gast = gast->next->next;
		glow = glow->next;
		if (gast == glow)
		{
			glow = head;
			while (glow != gast)
			{
				glow = glow->next;
				gast = gast->next;
			}
			return (gast);
		}
	}

	return (NULL);
}
