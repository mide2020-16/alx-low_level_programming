#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The input string
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}

/**
 * _puts - Writes a string to the standard output
 * @s: The string to be written
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 * _strcpy - Copies a string to another
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return start;
}

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return start;
}

/**
 * _strncat - Concatenates n characters of two strings
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to concatenate
 *
 * Return: A pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return start;
}
