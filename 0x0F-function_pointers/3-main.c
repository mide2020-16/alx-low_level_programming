#include "3-calc.h"
#include <stdio.h>


int main(int argc, char *argv[])
{
	int i = 0;
	int j = 4;
	char operator = argv[argc - 2];

	int num1 = atoi(argv[i + 1]);

	int num2 = atoi(argv[argc - 1]);

	if (argc != j)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator != '+' || operator != '-' || operator != '*' || operator != '/' || operator != '%')
	{
		print("Error\n");
		exit(99);
	}

	if ((operator == '/' && num2 == 0) || (operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
}
