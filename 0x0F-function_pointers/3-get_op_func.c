#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
	        {"+", op_add},
	        {"-", op_sub},
	        {"*", op_mul},
	        {"/", op_div},
	        {"%", op_mod},
	        {NULL, NULL}
   	 };

	while (i = 0; ops[i].op != NULL)
		{
			if (s != ops[i].op)
			{
				return (NULL);
			}
		}
}
