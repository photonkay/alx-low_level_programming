#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - printing diagonals
 * @n: number of times
 *
 * Return: void
 */
void print_diagonal(int n) /*@n: number of times*/
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
