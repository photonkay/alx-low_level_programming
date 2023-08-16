#include <stdio.h>
#include "main.h"

/**
 * _abs: computes the absolute of an integer
 * Return: Always 0 on success
 */
int _abs(int)
{
	int i; /*@i is the integer passed*/

	if (i < 0)
	{
		i = -1 * i;
	}
	_putchar(i);
}
