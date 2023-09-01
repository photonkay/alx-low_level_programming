#include <stdio.h>

/**
 * main - entry point
 * Description - print number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	if (*argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
