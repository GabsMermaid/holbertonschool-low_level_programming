#include "holberton.h"
/**
 * leet - encodes a string into leetspeek.
 * @s: pointer to input string.
 * Return: Returns pointer to leetspeek string.
 */
char *leet(char *s)
{
	int x;
	int y;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	x = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; subs[y] != '\0'; y++)
			if (s[x] == subs[y])
				s[x] = le[y / 2];
	}
	return (s);
}
