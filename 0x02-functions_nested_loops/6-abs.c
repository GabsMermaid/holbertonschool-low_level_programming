#include "holberton.h"

/**
 *_abs(int) - computes the absolute value of an integer
 *
 *Return: absolute value of @n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
