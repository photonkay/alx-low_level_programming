#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumeric - checks if argument is a digit
 * @str - argument passed
 * Return - 1 if is digit
 * otherwise 0 is returned
 */
int isNumeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
        str++;
	}
	return (1);
}

/**
 * multiply - multiply two numbers
 * @num1: first number
 * @num2: second number
 * Return; product
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *num1_str, *num2_str;
	int num1. num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return 98; /*incorrect number of arguments*/
	}

	*num1_str = argv[1];
	*num2_str = argv[2];

	if (!isNumeric(num1_str) || !isNumeric(num2_str))
	{
		printf("Error\n");
		return 98; /*Arguments are not numeric*/
	}

 	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		return 98; /*Numbers are not positive*/
	}

	result = multiply(num1, num2);
	printf("%d\n", result);

	return 0;
}
