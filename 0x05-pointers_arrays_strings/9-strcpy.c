#include "holberton.h"

/**
 * _strcpy - copies string pointed to by src to buffer pointed by dest
 * @src: source string to copy from
 * @dest: destination where to copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
