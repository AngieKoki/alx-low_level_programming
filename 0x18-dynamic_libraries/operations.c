#include "main.h"
#include <stdio.h>

/**
 * add - adds 2 numbers
 * @a: num1
 * @b: num2
 * Return: a + b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts 2 numbers
 * @a: num1
 * @b: num2
 * Return: a - b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies 2 numbers
 * @a: num1
 * @b: num2
 * Return: a * b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides 2 numbers
 * @a: num1
 * @b: num2
 * Return: a / b
 */

int div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		return (123456);
	}
	return (a / b);
}

/**
 * mod - gives the modulo of  2 numbers
 * @a: num1
 * @b: num2
 * Return: a % b
 */

int mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		return (123456);
	}
	return (a % b);
}
