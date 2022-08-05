#include "variadic_functions.h"

/**
 * sum_them_all - return sum of all parameters
 * n: input integer
 * Return: sum, n==0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned in sum = 0, i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	
	va_end(ptr);
	
	return (sum);
}
