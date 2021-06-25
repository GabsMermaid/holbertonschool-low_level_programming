#include "holberton.h"

/**
 *print_triangle - prints a triangle, followed by a new line
 *@size: desired size of the triangle
 *
 *Return: -nothing-
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, sym,  spcs;

		for (i = 1; i <= size; i++)
		{
			for (spcs = size - i ; spcs > 0; spcs--)
			{
				_putchar(' ');
			}
			for (sym = i; sym > 0; sym--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
