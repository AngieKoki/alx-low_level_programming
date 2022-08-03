#include "3-calc.h"

/**
 * op_add - adds 2 numbers
 * @a: num1
 * @b: num2
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: num1
 * @b: num2
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: num1
 * @b: num2
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: num1
 * @b: num2
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gives the modulo of  2 numbers
 * @a: num1
 * @b: num2
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
