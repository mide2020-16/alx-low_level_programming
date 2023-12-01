#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print all types of arg
 * @format: The format of types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
       	char current_format;
       	int printed = 0;

	va_start(args, format);

	while (*ptr)
	{
		if (printed)
			printf(",");
		current_format = *ptr;

		switch (current_format)
		{
			case('c'):
				printf("%c", (char)va_arg(args, int));
				break;
			case('i'):
				printf("%d", va_arg(args, int));
				break;
			case('f'):
				printf("%f", (float)va_arg(args, double));
				break;
			case('s'):
				if (va_arg(args, char *) == NULL)
					printf("(nil)");
				else
					printf("%s", va_arg(args, char *));
				break;
			default:
				break;
		}
		printed = 1;
		ptr++;
	}
	printf("\n");
	va_end(args);
}
