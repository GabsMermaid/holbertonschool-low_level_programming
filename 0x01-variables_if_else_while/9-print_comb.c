#include <stdio.h>

/**
 * main - print all possible combinations of single digit
 * numbers
 *
 * Return: 0
 */

int main(void)
{
	int sd;

	for (sd = 0; sd <= 9; sd++)
	{
		putchar(sd + '0');
		if (sd < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
