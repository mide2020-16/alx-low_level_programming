#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a Name
 * @name: Name
 * @f: pointer to a function that prints Name
 */

void print_name(char *name, void (*f)(char *))
{

	f(name);
}
