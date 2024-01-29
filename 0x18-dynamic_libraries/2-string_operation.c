#include "main.h"

/**
 * _strncpy - Copies n characters from one string to another
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to copy
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return start;
}

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 if the strings are equal, a negative value if s1 < s2,
 *         and a positive value if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * _memset - Fills the first n bytes of a memory area with a constant byte
 * @s: The memory area
 * @b: The constant byte
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return start;
}

/**
 * _memcpy - Copies n bytes from one memory area to another
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return start;
}

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The input string
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	return NULL;
}
