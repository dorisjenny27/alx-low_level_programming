#include "main.h"

/**
 * set_bit - This actually sets the value of a bit to 1 at a given index.
 * @n: This is the num to set
 * @index: This is the index at which to set bit
 *
 * Return: 1 if it actually worked, or -1 if an error occurred instead
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int test;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	test = 1 << index;
	*n = *n | test;
	return (1);
}
