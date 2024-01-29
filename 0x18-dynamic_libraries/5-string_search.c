#include "main.h"
#include <string.h>
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

/**
 * _strspn - Calculates the length of the initial segment of a string
 *            consisting of only characters from another string
 * @s: The input string
 * @accept: The string containing allowed characters
 *
 * Return: The length of the initial segment of s consisting of only characters
 *         from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int count = 0;
        while (*s != '\0' && *strchr(accept, *s) != '\0')
        {
                count++;
                s++;
        }
        return count;
}

/**
 * _strpbrk - Locates the first occurrence in a string of any character
 *            from another string
 * @s: The input string
 * @accept: The string containing characters to search for
 *
 * Return: A pointer to the first occurrence in s of any character from accept,
 *         or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        if (*strchr(accept, *s) != '\0') {
            return s;
        }
        s++;
    }
    return NULL;
}
