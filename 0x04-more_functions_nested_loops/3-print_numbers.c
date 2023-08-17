#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints out numbers from 0 to 9
 * no return
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
