#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: string to check against
 *
 * Return: pointer to byte in @s that matches or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int index, j;

	for (index = 0; s[index]; index++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[index] == accept[j])
				break;
		}
		if (accept[j])
			return (s + index);
	}
	return (0);
}
