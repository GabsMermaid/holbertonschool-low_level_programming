#include "holberton.h"

/**
 * _memset - fill the first @n bytes of the memory area pointed
 *           to by @s with the constant byte @b
 * @s: pointer to memory area to be filled
 * @b: character to fill memory area
 * @n: number of bytes to fill
 *
 * Return: pointer to filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *a = s, c = b;

	for (i = 0; i < n; i++)
	a[i] = c;

	return (a);
}

