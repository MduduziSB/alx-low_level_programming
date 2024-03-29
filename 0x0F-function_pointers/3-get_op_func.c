#include "3-calc.h"
/**
 * get_op_func - selects the corresponding function
 * @s: charecter
 * Return: integer value
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (i < 5)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (0);
}

