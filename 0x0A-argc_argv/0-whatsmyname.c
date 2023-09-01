#include <stdio.h>

/**
 * main - entry point
 * Description - prints program name
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
