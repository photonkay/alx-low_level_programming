#include "main.h"

/*function prototype*/
int the_sqrt(int n, int i);

/**
 * _sqrt_recursion - finds square root of a natural number
 * @n: the number
 * Return: int n or -1 to indicate error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (the_sqrt(n, 0));
}

/**
 * the_sqrt - this is the main guy
 * @n: the number
 * @i: is the iterator
 * Return: int n or -1 to indicate error
 */
int the_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (the_sqrt(n, i + 1));
}
