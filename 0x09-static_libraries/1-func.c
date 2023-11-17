#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * *_strcat - Checks Lower
 *
 * @dest: The string
 *
 * @src: The source
 *
 * Return: Sucess
 */

char *_strcat(char *dest, const char *src) {
    char *ptr = dest;


    while (*ptr != '\0') {
        ptr++;
    }

    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0';

    return dest;
}


/**
 * *_strncat - Alphabet Checker.
 *
 * @dest: The string
 *
 * @src: The source
 * @n: the number
 *
 * Return: Success
 */

char *_strncat(char *dest, const char *src, int n) {
    char *ptr = dest;

    // Move the pointer to the end of the destination string
    while (*ptr != '\0') {
        ptr++;
    }

    // Copy at most n characters from src to dest
    while (*src != '\0' && n > 0) {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    // Add a null terminator to the concatenated string
    *ptr = '\0';

    // Return a pointer to the resulting string dest
    return dest;
}


/**
 * *_strncpy - Absolute number
 *
 * @dest: the number
 *
 * @src: the source
 *
 * @n: integer
 *
 * Return: Success
 */

char *_strncpy(char *dest, const char *src, int n) {
    char *ptr = dest;

    // Copy at most n characters from src to dest
    while (*src != '\0' && n > 0) {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    // If n is greater than the length of src, pad with null characters
    while (n > 0) {
        *ptr = '\0';
        ptr++;
        n--;
    }

    // Return a pointer to the resulting string dest
    return dest;
}

/**
 * _strcmp - gets upper
 *
 * @s1: the char
 *
 * @s2: second char
 *
 * Return: Success
 */
char _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
}

    return (*s1 - *s2);
}
