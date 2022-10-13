#include "3-calc.h"

/**
 * op_add - add the two digits.
 * @a: first digit
 * @b: second digit
 * Return: integer res_add
 */
int op_add(int a, int b)
{
	int res_add;

	res_add = a + b;
	return (res_add);
}

/**
 * op_sub - substracts two digits.
 * @a: first digit.
 * @b: second digit.
 * Return: integer res_sub.
 */
int op_sub(int a, int b)
{
	int res_sub;

	res_sub = a - b;

	return (res_sub);
}

/**
 * op_mul - multiplies two digits.
 * @a: first digit.
 * @b: second digit.
 * Return: integer res_mul.
 */
int op_mul(int a, int b)
{
	int res_mul;

	res_mul = a * b;

	return (res_mul);
}

/**
 * op_div - divides two digits.
 * @a: first digit.
 * @b: second digit.
 * Return: integer res_div.
 */
int op_div(int a, int b)
{
	int res_div;

	res_div = a / b;

	return (res_div);
}

/**
 * op_mod - finds the modulus between two digits.
 * @a: first digit.
 * @b: second digit.
 * Return: integer res_mod.
 */
int op_mod(int a, int b)
{
	int res_mod;

	res_mod = a % b;

	return (res_mod);
}
