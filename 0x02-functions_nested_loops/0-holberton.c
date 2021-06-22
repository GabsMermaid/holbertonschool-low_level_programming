#include "holberton.h"

/**
 *main - Print HOLBERTON followed by a new line
 *
 *Return: 0, success
 */

int main(void)
{
	int H;
	char ch[9] = "Holberton";

	for (H = 0; H < 9; H++)
	{
		_putchar(ch[H]);
	}

	_putchar('\n');

	return (0);
}
