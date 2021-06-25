#include "holberton.h"

/**
 *print_number - print and integer char by char
 *@n: integer to be printed
 *
 *Return: -nothing-
 */

void print_number(int n)
{
	unsigned int xn;

	if (n < 0)
	{
		_putchar('-');
		xn = -n;
	}
	else
	{
		xn = n;
	}
	if (xn / 10 != 0)
	{
		print_number(xn / 10);
	}

	_putchar(xn % 10 + '0');
}
