#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplicatin
 * @argc: counter
 * @argv: vector
 * Return: Success
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int ans = num1 * num2;
	printf("%d\n", ans);
	return (0);
}
