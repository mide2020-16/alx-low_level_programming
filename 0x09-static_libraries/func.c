#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _islower - Checks Lower
 *
 * @c: The string
 *
 * Return: Success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z') {
        return 1;  
    } else {
        return 0;
    }
}

/**
 * _isalpha - Alphabet Checker.
 *
 * @c: The string
 *
 * Return: Success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}

/**
 * _abs - Absolute number
 *
 * @n: the number
 *
 * Return: Success
 */
int _abs(int n)
{
	 if (n < 0) {
        return -n;
    }
        return n;   
}

/**
 * _isupper - gets upper
 *
 * @c: the char
 *
 * Return: Success
 */

int _isupper(int c) {
    // Check if the character is uppercase
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

/**
 * _isdigit - Gets Digit.
 *
 * @c: the diget
 *
 * Return: Success.
 */
int _isdigit(int c)
{
	 if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}
