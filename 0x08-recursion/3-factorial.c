#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: input integer
 * Return: n < 0 return 0, -1 if error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
