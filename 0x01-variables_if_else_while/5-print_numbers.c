#include <stdio.h>

/**
 * main - prints all single digit numbers of b10
 *
 * Return: 0 - success
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}

	putchar('\n');

	return (0);
}
