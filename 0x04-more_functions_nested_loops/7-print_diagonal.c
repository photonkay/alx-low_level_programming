#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal n times
 * @n: number of times \ is printed
 * Return: void
 */
void print_diagonal(int n) /*@n: number of times*/
{
	int i,j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
}
