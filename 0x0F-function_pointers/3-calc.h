#ifndef CALC
#define CALC

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_add - adds 2 numbers
 * @a: num1
 * @b: num2
 * Return: a + b
 */

int op_add(int a, int b);

/**
 * op_sub - subtracts 2 numbers
 * @a: num1
 * @b: num2
 * Return: a - b
 */

int op_sub(int a, int b);
/**
 * op_mul - multiplies 2 numbers
 * @a: num1
 * @b: num2
 * Return: a * b
 */

int op_mul(int a, int b);

/**
 * op_div - divides 2 numbers
 * @a: num1
 * @b: num2
 * Return: a / b
 */

int op_div(int a, int b);

/**
 * op_mod - gives the modulus of  2 numbers
 * @a: num1
 * @b: num2
 * Return: a % b
 */

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
