#include "main.h"

/**
*puts_half - prints second half of chars in even positions
*@str: string argument passed
*Return: void
*/
void puts_half(char *str)
{
    int i, length = 0;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
	{
		for (i = length/2; i < length; i++)
			putchar(str[i]);
	}
	else
	{
		for (i = (length + 1)/2; i < length; i++)
			putchar(str[i]);
	}
	putchar('\n');
}
