#include "main.h"

/**
*puts2 - prints chars in even positions
*@str: string argument passed
*Return: void
*/
void puts2(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
