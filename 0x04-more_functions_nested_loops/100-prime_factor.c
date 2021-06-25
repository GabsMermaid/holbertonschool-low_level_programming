#include <stdio.h>

/**
 *main - Write a program that finds and prints the largest prime
 *factor of the number 612852475143, followed by a new line
 *
 *Return: 0
 */

int main(void)
{
	long a;
	long fact = 612852475143;
	long lp = 1;

	for (a = 2; a <= fact; a++)
		while (fact % a == 0)
		{
			fact = fact / a;
			if (a > lp)
			{
				lp = a;
			}
		}
	printf("%ld\n", lp);

	return (0);
}
