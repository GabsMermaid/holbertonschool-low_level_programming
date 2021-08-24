#include <stdio.h>

/**
 * main - print numbers  base 16
 *
 * Return: 0
 */

int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
