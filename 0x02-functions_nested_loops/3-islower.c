#include <stdio.h>
#include "main.h"

/*
 * _islower(int c) checks if an alphavet is lower
 * Return 1 if c is lowercase
 * Return 0 otherwise
 */
int islower(int c)
{
	if (c > 96 && c < 122)
		return (1);
	else
		return (0);
}
