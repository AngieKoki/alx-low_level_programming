#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: character input of name
 * @f: function pointer to a character 
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
