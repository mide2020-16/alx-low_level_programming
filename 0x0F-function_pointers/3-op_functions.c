#include "3-calc.h"

/**
 * op_add - Addition of two numbers
 * @a: first number
 * @b: second number
 * Return: Success
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction of two numbers
 * @a: first number
 * @b: second number
 * Return: Success
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication of two numbers
 * @a: first number
 * @b: second number
 * Return: Success
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of two numbers
 * @a: first number
 * @b: second number
 * Return: Success
 */


int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - Modulus of two numbers
 * @a: first number
 * @b: second number
 * Return: Success
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
