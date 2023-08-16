#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) checks if an alphabet is lower
 * Return 1 if c is lowercase
 * Return 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 122)
		return (1);
	else
		return (0);
}
