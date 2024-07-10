#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - Functions that prints a name.
 * @name: The name to be printed.
 * @f: a pointer.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}