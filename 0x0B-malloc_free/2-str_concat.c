#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Success
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
    if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(strlen(s1) + strlen(s2) + 1);
	
	if (s == NULL)
		return (NULL);
	strcpy(s, s1);
	strcat(s, s2);

	return (s);
}
