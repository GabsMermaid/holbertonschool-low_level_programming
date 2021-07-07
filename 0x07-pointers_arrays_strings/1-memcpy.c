#include "holberton.h"

/**
 * _memcpy - copy amount of data from @src to @dest
 * @dest: destination where to copy contents
 * @src: source from where to copy the contents from
 * @n: amount of data to copy
 *
 * Return: pointer to new value of @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ndest = dest, *nsrc = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ndest[i] = nsrc[i];
	}

	return (ndest);
}

