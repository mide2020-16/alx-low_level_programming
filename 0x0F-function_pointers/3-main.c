#include "3-calc.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j, num1, num2;
	char symbol;
	i = 0;
	j = 4;
	
	num1 = atoi(argv[i + 1]);
	num2 = atoi(argv[argc - 1]);
	symbol = argv[argc - 2];
	int (*operator)(int, int);

	operator = get_op_func(argv[symbol])

	if (argc != j)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator == NULL)
	{
		print("Error\n");
		exit(99);
	}

	if ((symbol == '/' && num2 == 0) || (symbol == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
}
