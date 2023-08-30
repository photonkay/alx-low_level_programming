#include "main.h"

/**
 * _puts_recursion - works as the puts function
 * @s: string to print out
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
