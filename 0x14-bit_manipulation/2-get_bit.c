#include"main.h"

/**
 * get_bit - This is the value of a bit at a given index.
 * @n: This is the num to check bits
 * @index: This is the index at which to check bit
 *
 * Return: This returns the value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, cage;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	cage = n & divisor;
	if (cage == divisor)
		return (1);
	return (0);
}
