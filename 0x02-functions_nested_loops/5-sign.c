#include <stdio.h>
#include "main.h"

/**
 * print_sign(int n) - prints the sign of a number
 * @n: number passed into the function
 * Return: Always 1 if positive
 * if negative, -1 is returned
 * otherwise zero is returned
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
