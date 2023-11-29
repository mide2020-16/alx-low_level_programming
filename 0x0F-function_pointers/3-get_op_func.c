#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

int (*get_op_func(char *s))(int, int)
{
	op_t operation;

	operation = malloc(sizeof(op_t));

	strcpy(operation->op, s);

	get_op_func(operation->);
}

