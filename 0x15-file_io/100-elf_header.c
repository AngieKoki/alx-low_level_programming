#include "main.h"

/**
 * main - displays the info contained in ELF header
 * @argc: the number of arguments 
 * @argv: pointer to array of arguments
 * Return: 1 on success, error message to stderr
 */

int main(int argc, char *argv[])
{
	printf("argc:%D, argv:%p\n", argc, (void *)*argv);
	return (1);
}
