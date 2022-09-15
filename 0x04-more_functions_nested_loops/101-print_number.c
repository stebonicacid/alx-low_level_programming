#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	} else
	{
		a = n;
	}

	if (a > 9)
	{
		print_number(a / 10);
	}

	_putchar((a % 10) + '0');
}
