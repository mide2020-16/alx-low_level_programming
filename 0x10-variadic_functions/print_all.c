#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints all kind of type of args
 * @format: the format of types
 * Return: Success
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);


	char current_format;

	char char_arg;
	float float_arg;
	int int_arg;
	char *str_arg;

	int printed = 0;

	while((current_format = *format))
	{
		if (printed)
			printf(",");
		switch(current_format)
		{
			case('c'):
				char_arg = (char)va_arg(args, int);
				printf("%c", char_arg);
				printed = 1;
				break;
			case('i'):
				int_arg = va_arg(args, int);
				printf("%d", int_arg);
				printed = 1;
				break;
			case('f'):
				float_arg = va_arg(args, float);
				printf("%f", float_arg);
				printed = 1;
				break;
			case('s'):
				str_arg = va_arg(args, char *);
				if (str_arg == NULL)
					printf("(nil)");
				else
					printf("%s", str_arg);
				printed = 1;
				break;
		}

		format++;
	}

	va_end(args);

}
