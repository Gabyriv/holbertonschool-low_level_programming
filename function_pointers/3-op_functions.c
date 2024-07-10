#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two variables.
 * @a: A variable.
 * @b: Another variable.
 *
 * Return: The sum of a + b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two variables.
 * @a: A variable.
 * @b: Another variable.
 *
 * Return: The difference of a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two variables.
 * @a: A variable.
 * @b: Another variable.
 *
 * Return: The product of a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: A number.
 * @b: Another number.
 *
 * Return: The result of a / b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Return the remainder of the division of two numbers.
 * @a: A number.
 * @b: Another number.
 *
 * Return: The remainder of the division of a / b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
