#include <stdio.h>
#include "main.h"

/**
 * -isupper checks for uppercase
 *  @c: is the letter passed into function
 *  Return: Always 1 if c is uppercase
 *  0 is returned otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}