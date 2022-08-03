#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare
 * Return: index of the 1st element, cmp !0
 * If no element return -1
 * If size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	while (size-- > 0)
	{
		i++;
		if (cmp(*array) != 0)
		{
			return (i - 1);
		}
		array++;
	}
	return (-1);
}
