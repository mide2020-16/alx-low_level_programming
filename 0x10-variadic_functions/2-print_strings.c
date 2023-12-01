#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints args as strings
 *
 * @separator : the comma
 * @n: the number of args
 * Return: Success
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;

	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		const char *str;

		str = va_arg(arg, const char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);

}
