#include "main.h"

/**
 * _print_rev_recursion - This prints a string in reverse order.
 * @s: the string to be printed
 * return: Always Successz
 */

void _print_rev_recursion(char *s)
{
	/*
	 * Check if the string as reached the null terminator
	 */
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);

	_putchar(*s);

}
