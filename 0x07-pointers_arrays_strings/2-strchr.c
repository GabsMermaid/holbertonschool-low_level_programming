#include "holberton.h"

/**
 * _strchr - find the first occurence of @c in @s.
 * @s: string to search
 * @c: character to find
 *
 * Return: pointer to result of search.
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	else
	{
		return ('\0');
	}
}
