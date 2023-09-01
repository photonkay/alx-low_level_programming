#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description - print number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int i, sum;

	for (i = 0; i < argc; i++)
	{
		if (argc > 2)
		{
			sum = atoi(argv[i]) + atoi(argv[i + 1]);
			printf("%d", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	return (0);
}
