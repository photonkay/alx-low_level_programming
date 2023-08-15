#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints out lower case alphabets
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (ch <= 'c')
		{
			_putchar(ch);
			ch ++;
		}
		_putchar('\n');
	}
}
~
