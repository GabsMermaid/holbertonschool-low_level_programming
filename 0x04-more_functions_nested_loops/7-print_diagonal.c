#include "holberton.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: length of diagonal line measured in characters of '\'
 *
 *Return: -nothing-
 */

void print_diagonal(int n)
{
	int i, spcs;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (spcs = 0; spcs < i; spcs++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
