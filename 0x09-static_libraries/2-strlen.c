#include "main.h"
/**
 * _strlen - it returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int abt = 0;

	while (*s != '\0')
	{
		abt++;
		s++;
	}

	return (abt);
}
