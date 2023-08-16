#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number passed into function
 * Return: Always 0 on success
 */
int print_last_digit(int i)
{
	int r; /*r is the remainder*/

	r = i % 10;
	write(1, r, sizeof(r) - 1);
	return (r);
}
