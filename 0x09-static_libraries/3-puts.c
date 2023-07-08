#include "main.h"
/**
 * _puts - this prints a string, followed by a new line, to stdout
 * @s: the string to print
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
