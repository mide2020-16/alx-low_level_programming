#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - addtion of numbers
 * @argc: the counts
 * @argv: the vector
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		int j, num;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
