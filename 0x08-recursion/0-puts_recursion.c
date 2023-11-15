#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to print.
 * Return: Always Success
 */

void _puts_recursion(c)
{

	if (*s == '\0')
	{
		_putchar('\n');

	}
	_putchar(*s);

	_puts_recursion(s + 1);

}
