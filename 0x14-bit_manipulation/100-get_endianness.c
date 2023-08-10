#include "main.h"

/**
 * get_endianness - This actually checks the endian
 *
 * Return: 0 if it is a big endian, 1 if it is a little endian
 */
int get_endianness(void)
{
	int k;
	char *p;

	k = 1;
	p = (char *)&k;
	return (*p);
}
