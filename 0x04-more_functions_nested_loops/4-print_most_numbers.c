#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)

{

	int y;

	for (y = 48; y < 58; y++)
	{
	if (y != 50)
	{
	if (y != 52)
	{
	_putchar(y);
	}
	}
	}
	_putchar('\n');
}
