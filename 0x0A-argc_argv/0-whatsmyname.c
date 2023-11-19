#include "main.h"

/**
 * _argvv - nmae of file followed by a newline
 *
 * @argc: count arg
 *
 * @argv: vector arg
 *
 * Return: Name Success
 */

int _argvv(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);

}
