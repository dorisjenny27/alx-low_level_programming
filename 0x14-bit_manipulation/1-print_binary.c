#include "main.h"

/**
 * _pow - This actually calculates (base ^ power)
 * @base: This means the base of the exponent
 * @power: This means the power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int p;

	num = 1;
	for (p = 1; p <= power; p++)
		num *= base;
	return (num);
}

/**
 * print_binary - This actually prints a num in binary notation
 * @n: THis is actually the num to print
 *
 * Return: This should return void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char gate;

	gate = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			gate = 1;
			_putchar('1');
		}
		else if (gate == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
