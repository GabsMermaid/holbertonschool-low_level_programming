/**
 * print_name - Print the mane given
 * @name: Name to print
 * @f:: Pointer to void function, taking char * as arg
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
