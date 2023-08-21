#include "main.h"

/**
*_puts - prints out string
*@str: string argument passed
*Return: void
*/
void _puts(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
