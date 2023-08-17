#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: is the chracter passed
 * Return: 1 if digit
 */
int _isdigit(int c) /*@c: char to test*/
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
