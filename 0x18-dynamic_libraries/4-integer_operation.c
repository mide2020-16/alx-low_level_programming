#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
        return (n < 0) ? -n : n;
}

/**
 * _isupper - Checks if a character is an uppercase letter
 * @c: The character to be checked
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
        return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to be checked
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
        return (c >= '0' && c <= '9');
}

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
        int result = 0;
        int sign = 1;

        if (*s == '-')
        {
                sign = -1;
                s++;
        }

        while (*s >= '0' && *s <= '9')
        {
                result = result * 10 + (*s - '0');
                s++;
        }

        return sign * result;
}
