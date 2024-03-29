#include <stdio.h>

/**
 *main - prints unique possible combinations of 2 digits in which 01
 *and 10 are considered the same combination
 *
 *Return: 0
 */

int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = d1 + 1; d2 < 10; d2++)
		{
			putchar(d1 + '0');
			putchar(d2 + '0');
			if ((d1 * 10 + d2) < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
