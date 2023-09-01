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
	int i, sum, num = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
		}
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
