#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: input integers
 * @n: number of elements in the array
 * Return: the reverse of the array
 */

void reverse_array(int *a, int n)
{
	int arr_item;
	int arr_pos;
	int temp;

	arr_item = 0;
	arr_pos = n - 1;

	while (arr_item < arr_pos)
	{
		temp = a[arr_item];
		a[arr_item] = a[arr_pos];
		a[arr_pos] = temp;

		arr_item++;
		arr_pos--;
	}
}
