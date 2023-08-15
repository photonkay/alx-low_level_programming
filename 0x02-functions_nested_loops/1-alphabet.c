#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * print alphabet in lowercase
 * Return: 0 as success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
