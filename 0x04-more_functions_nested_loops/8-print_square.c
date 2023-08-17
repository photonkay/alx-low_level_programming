#include <stdio.h>
#include "main.h"

/**
 * print_square - prints # as square
 * @size: is the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			for (j = 0; j < size - 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
