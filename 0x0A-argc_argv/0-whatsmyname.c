#include <stdio.h>

/**
 * main - entry point
 * Description - print name of program
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
