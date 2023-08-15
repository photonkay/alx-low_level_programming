#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints out lower case alphabets ten times
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
