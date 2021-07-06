#include "holberton.h"

/**
 * cap_string - capitalizes all words of string
 * @s: string to capitalize
 *
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int i = 1;
	int j;
	char *sep = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= ('a' - 'A');
		i++;
	}
	return (s);
}
