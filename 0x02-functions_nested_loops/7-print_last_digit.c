#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number passed into function
 * Return: Always 0 on success
 */
int print_last_digit(int i)
{
	int d; /*d is the remainder*/

	if (i > 0)
	{
		i = (-1) * i;
		d = i % 10;
		_putchar(d);
	}
	else
	{
		d = i % 10;
		_putchar(d);
	}
	return (d);
}
