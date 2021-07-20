#include "holberton.h"

/**
 * puts_half - print half of the string followed by a new line
 * @str: string of characters
 *
 * Return: null
 */

void puts_half(char *str)
{
	int i;
	int j;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;
	j = len - i;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}
