#include "main.h"

/**
 * binary_to_uint - This actually converts a binary num to unsigned int
 * @b: This is the string containing the binary number
 *
 * Return: This is actually the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int de_val = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')
			return (0);
		de_val = 2 * de_val + (b[l] - '0');
	}

	return (de_val);
}
