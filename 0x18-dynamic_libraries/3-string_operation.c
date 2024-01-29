#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c) {
    return write(1, &c, 1);
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
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s != '\0' && *_strchr(accept, *s) != '\0') {
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
        if (_strchr(accept, *s) != NULL) {
            return s;
        }
        s++;
    }
    return NULL;
}

/**
 * _strstr - Locates the first occurrence of a substring in a string
 * @haystack: The string to search
 * @needle: The substring to locate
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
    while (*haystack != '\0') {
        char *h = haystack;
        char *n = needle;
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0') {
            return haystack;
        }
        haystack++;
    }
    return NULL;
}
