#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - duplicates content
 * @str: the string
 * Return: Success
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(strlen(str) + 1);

	if (s != NULL)
		strcpy(s, str);

	return (s);
}
