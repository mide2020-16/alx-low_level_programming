include "main.h"

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

	int ans;
	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", ans);
	return (0);
}
