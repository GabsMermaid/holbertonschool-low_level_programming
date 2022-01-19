#include "search_algos.h"

/**
 * linear_search - search for value in array using linear search algorithm
 *
 * @array: point to first element of array to be searched
 * @size: number of elements in array
 * @value: value to be searched
 *
 * Return: first index where value is located or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, tmp);
			if (tmp == value)
				return (i);
		}
	}
	return (-1);
}
