#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two nums and prints the result
 * @argc: argument counter
 * @argv: argument vector
 * Return: result of multiplication , Error if no argument, return 1
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
