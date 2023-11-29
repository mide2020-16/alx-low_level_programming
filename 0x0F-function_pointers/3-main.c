#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, num1, num2, result;

	char *symbol;

	i = 0;
	
	num1 = atoi(argv[1]);
	symbol = argv[2];
	num2 = atoi(argv[3]);
	
	int (*operator)(int, int);

	operator = get_op_func(symbol)

	if (argc != 4)
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
	result = operator(num1, num2);
	printf("%d\n", result);

	return (0);
}
