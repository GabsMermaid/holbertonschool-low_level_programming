#include <stdio.h>

/**
*main - print the whole alphabet in lowercase
*and in uppercase followed by a new line
*
*Return: 0 always
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
