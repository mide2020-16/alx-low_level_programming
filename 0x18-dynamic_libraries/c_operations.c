#include <stdio.h>

/**
 * add - Adds two integers
 * @a: first number
 * @b: second number
 * Return: addition
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * sub - Subtracts two integers
 * @a: first number
 * @b: second number
 * Return: subtraction
 */
int sub(int a, int b)
{
    return a - b;
}

/**
 * mul - Multiplies two integers
 * @a: first number
 * @b: second number
 * Return: multiplication
 */
int mul(int a, int b)
{
    return a * b;
}

/**
 * div - Divides two integers
 * @a: first number
 * @b: second number
 * Return: division
 */
int div(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

/**
 * mod - Computes the remainder of the division of two integers
 * @a: first number
 * @b: second number
 * Return: modulos
 */
int mod(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
    return a % b;
}
