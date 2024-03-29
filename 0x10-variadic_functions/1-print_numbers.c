#include "variadic_functions.h"

/**
 *print_numbers - print num'bers followed by a new line
 *@separator:string to print between numbers
 *@n: number of nums to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	i = 0;
	va_start(nums, n);
	while (i < n)
	{
		printf("%d", va_arg(nums, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(nums);
}
