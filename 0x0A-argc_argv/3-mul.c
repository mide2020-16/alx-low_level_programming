include "main.h"

/**
 * main - multiplicatin
 * @argc: counter
 * @argv: vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	ans = 1;
	ans = argv[1] * argv[2];
	printf("%d\n", ans);
	return (0);
}
