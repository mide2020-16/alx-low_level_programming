#include "main.h"

/**
 * main - nmae of file followed by a newline
 *
 * @argc: count arg
 *
 * @argv: vector arg
 *
 * Return: Name Success
 */

char main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
