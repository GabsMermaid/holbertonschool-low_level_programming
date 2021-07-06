#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: bytes amount
 *
 * Return: pointer to new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;

	while (dest[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}

	dest[x + y] = '\0';
	return (dest);
}
