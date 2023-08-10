#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This actually sets the value of a bit to 0 at a given index
 * @n: This defines the parameter
 * @index: This defines the index
 * Return: 1 if it actually works, -1 if it returns an error
 */
int clear_bit(unsigned long int *n, unsigned int dices)
{
	if (dices > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << dices);
	return (1);
}
