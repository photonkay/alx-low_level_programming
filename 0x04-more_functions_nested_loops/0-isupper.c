#include <stdio.h>
#include "main.h"

/**
 * -isupper - checks for uppercase
 *  @c: is the letter passed into function
 *  Return: Always 1 if c is uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
