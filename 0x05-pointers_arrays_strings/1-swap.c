#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: variable for pointer.
 * @b: variable for pointer.
 *
 * Return: 0
 */


void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
