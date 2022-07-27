#include "main.h"

/**
 * create_array - creates an array of chars and intializes it
 * @size: size of the array
 * @c: character initialization
 * Return: Pointer to array, NULL if size = 0 or fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	x = 0;
	while (x < size)
	{
		str[x] = c;
		x++;
	}
	return (str);
}
