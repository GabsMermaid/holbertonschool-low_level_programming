#include "holberton.h"

/**
 * print_sign - print the sign of a number
 *
 *Return: 1 if its greater than zero; 0 and prints if n is zero;
 *-1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	
	return(-1);
}
