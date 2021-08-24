#include <stdio.h>

/**
 * main - print lowercase alphabet, followed by a new line
 *
 * Return: 0 (success)
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);

	putchar('\n');

	return (0);
}
