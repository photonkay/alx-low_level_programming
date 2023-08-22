#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number passed into function
 * Return: Always 0 on success
 */
int print_last_digit(int i)
{
	int d; /*d is the last digit*/

	if (i < 0)
	{
		d = (-1) * (i % 10);
	}
	else
	{
		d = i % 10;
	}
	_putchar(d + '0');
	return (d);
}
