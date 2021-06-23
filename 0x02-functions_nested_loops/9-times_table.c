#include "holberton.h"

/**
 *times_table - prints the 9 times table begining with 0
 *
 *Return: 0
 */

void times_table(void)
{
	int t, h, m, next;

	for (h = 0; h < 10; h++)
		for (t = 0; t < 10; t++)
		{
			m = h * t;
			next = h * (t + 1);
			if (m < 10)
			{
				_putchar(m + '0');
				if (t < 9)
				{
					_putchar(',');
					_putchar(' ');
					if (next < 10)
						_putchar(' ');
				}
			}
			else
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
				if (t < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			if (t == 9)
				_putchar('\n');
		}
}
