#include "holberton.h"

/**
 * malloc_checked - Allocate memory using malloc
 * @b: Size of memory needed
 *
 * Return: Pointer to address of the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ad;

	ad = malloc(b);
	if (ad == NULL)
		exit(98);
	return (ad);
}
