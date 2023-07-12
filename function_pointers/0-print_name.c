#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name.
 * @name: name
 * @f: function to referenciate
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
