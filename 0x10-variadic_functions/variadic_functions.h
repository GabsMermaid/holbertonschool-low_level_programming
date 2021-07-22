#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#define FORMAT(f) ("%"#f)

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_form - Define a struct to figure out how to print
 * @c: Character to check for
 * @f: Pointer to function to call
 */

typedef struct print_form
{
	char *c;
	void (*f)();
} print_form_t;

/*Prototypes*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
