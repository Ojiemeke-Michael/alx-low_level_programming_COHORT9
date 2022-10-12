#include <stdio.h>

/**
 * print_name - prints name of the input.
 * @name: the name to be printed.
 * @f: the action function i.e. the function
 * which contains the formatting of the name.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
