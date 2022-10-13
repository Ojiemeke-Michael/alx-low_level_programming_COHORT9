#include "3-calc.h"

/**
 * get_op_func - gets type of the operator.
 * @s: operator for the calculation.
 * Return: pointer to function.
 */
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

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
