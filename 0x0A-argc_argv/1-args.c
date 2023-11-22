#include <stdio.h>

/**
 * main - The number of arguments passed to acli
 *
 * @argc: The count
 * @argv: vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int arg;

	arg = argc - 1;

	if (argv != NULL)
	{
		printf("%d\n", arg);
	}

	return (0);
}
