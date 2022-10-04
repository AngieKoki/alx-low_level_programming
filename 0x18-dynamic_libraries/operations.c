#include "main.h"
#include <stdio.h>

/**
 * _add - adds 2 numbers
 * @a: num1
 * @b: num2
 * Return: a + b
 */

int _add(int a, int b)
{
	return (a + b);
}

/**
 * _sub - subtracts 2 numbers
 * @a: num1
 * @b: num2
 * Return: a - b
 */

int _sub(int a, int b)
{
	return (a - b);
}

/**
 * _mul - multiplies 2 numbers
 * @a: num1
 * @b: num2
 * Return: a * b
 */

int _mul(int a, int b)
{
	return (a * b);
}

/**
 * _div - divides 2 numbers
 * @a: num1
 * @b: num2
 * Return: a / b
 */

int _div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * _mod - gives the modulo of  2 numbers
 * @a: num1
 * @b: num2
 * Return: a % b
 */

int _mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
