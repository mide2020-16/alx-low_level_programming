#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers seperated byy a comma
 * @separator: The comma
 * @n: number of args
 * Return: Succss
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		int num;

		num = va_arg(ap, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s ", separator);

	}

	printf("\n");

	va_end(ap);

}
