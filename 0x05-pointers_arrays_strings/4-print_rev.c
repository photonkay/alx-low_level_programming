#include "main.h"

/**
*print_rev - prints string in reverse
*@str: string argument passed
*Return: void
*/
void print_rev(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
