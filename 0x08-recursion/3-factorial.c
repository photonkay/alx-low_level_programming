#include "main.h"

/**
 * factorial - outputs the factorial of an integer
 * @n: number whose factorial is to found
 * Return: -1 (error), 1 or factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
