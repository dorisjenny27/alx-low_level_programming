#include "main.h"

/**
 * binary_to_uint – This actually converts a binary num to unsigned int
 * @b: This is a string containing the binary number
 *
 * Return: This returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int k;
	unsigned int bed_lak = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		bed_lak = 2 * dec_val + (b[k] - '0');
	}

	return (bed_lak);
}
