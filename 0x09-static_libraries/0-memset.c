#include "main.h"
/**
 * _memset - fills a block of memory with a specific values
 * @s: started address of memory to be filled
 * @b: the desired value
 * @n: the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}

