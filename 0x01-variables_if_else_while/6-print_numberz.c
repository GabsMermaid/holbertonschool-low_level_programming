#include <stdio.h>

/**
 *main - prints all digits from base 10
 *
 *Return: 0 -success
 */

int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(b + '0');
	}

	putchar('\n');

	return (0);
}
