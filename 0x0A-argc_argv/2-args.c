#include "main.h"

/**
 * main -  all arguments
 * @argc: count
 * @argv: vector
 * Return: Success
 */

int man(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
