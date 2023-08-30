#include "main.h"

/**
 * _pow_recursion - outputs x^y
 * @x: base number
 * @y: exponent
 * Return: -1 (error), 1 or factorial
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
