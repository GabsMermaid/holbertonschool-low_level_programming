#include "search_algos.h"

/**
 * print_array - print array of integers
 *
 * @array: array to be printed
 * @size: size of array
 *
 * return: void
 */

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - search for value in a sorted array of
 * ints using binary search algorithm
 *
 * @array: points to first element of array to be searched
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: index where value is located or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, m, r;

	if (array != NULL && size > 0)
	{
		l = 0;
		r = size - 1;
		print_array(array + l, r + 1 - l);
		while (l < r)
		{
			m = (l + r) / 2;
			if (array[m] < value)
				l = m + 1;
			else if (array[m] > value)
				r = m;
			else
				return (m);
			print_array(array + l, r + 1 - l);
		}
	}
	return (-1);
}
