#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;

	/* Check if the first character is not '1' or '0' or if the string is NULL */
	if (b == NULL)
		return (0);

	/* Loop through the string */
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);
		/* Shift binary current character */
		result = (result << 1) | (*b - '0');

		b++;
	}

	/* Return the result */
	return (result);
}
