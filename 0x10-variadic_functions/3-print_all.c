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
	int check_stat, int i = 0, char *str_arg;
	
	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case('c'):
				printf("%c", (char)va_arg(args, int));
				check_stat = 0;
				break;
			case('i'):
				printf("%d", va_arg(args, int));
				check_stat = 0;
				break;
			case('f'):
				printf("%f", (float)va_arg(args, double));
				check_stat = 0;
				break;
			case('s'):
				str_arg = va_arg(args, char *);
				if (str_arg == NULL)
					printf("(nil)");
				else
					printf("%s", str_arg);
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat = 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
