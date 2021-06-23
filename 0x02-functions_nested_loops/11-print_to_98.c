#include "holberton.h"

/**
 *print_to_98 - prints all natural numbers between 0 and 98
 *@n: begining number
 *
 *Return: 0
 */

void print_to_98(int n)
{
	int nat = 1;

	if (n > 98)
		nat = -1;
	printf("%i", n);

	if (n != 98)
	{
		while (n != 98)
		{
			n += nat;
			printf(", %i", n);
		}
	}

	printf("\n");
}
