#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times followed by a new line
 *
 * Return: 0, success
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char alpha;

	while (x++ < 10)
	{
		for (alpha = 'a'; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}
}
