#include "main.h"

/*
 * _strlen_recursion: A function that retu
 * rns the length of a string.
 * @s: the string to use.
 * return : Alwyas Success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));

}
