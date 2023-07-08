#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: the memory where is stored
 * @src: the memory where is copied
 * *@n: the number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = 0;
	int i = n;

	for (; h < i; h++)
	{
		dest[h] = src[h];
		n--;
	}
	return (dest);
}
