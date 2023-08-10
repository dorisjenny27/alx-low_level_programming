#include "main.h"

/**
 * flip_bits - This actually counts the number of bits to change
 * to get from one number to another
 * @n: This is actually the first num
 * @m: This is actually the second num
 *
 * Return: This returns the num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, pount = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		current = exclusive >> d;
		if (current & 1)
			pount++;
	}

	return (pount);
}
