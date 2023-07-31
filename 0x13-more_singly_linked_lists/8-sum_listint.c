#include "lists.h"

/**
 * sum_listint - This actually calculates the sum of all the data in a listint_t list
 * @head: This is the first node in the linked list
 *
 * Return: This tells us the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
