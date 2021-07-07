#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string of characters
 * @accept: denotes the bytes to find in @s
 *
 * Return: number of bytes in initial segment of @s which consists
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != s[a]; b++)
		{
			if (accept[b] == '\0')
			return (a);
		}
	}

	return (a);
}
