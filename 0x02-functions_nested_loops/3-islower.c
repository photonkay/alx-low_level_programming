#include <stdio.h>
#include "main.h"

/**
 *c: is the character to be tested
 *function _islower(int c) - checks if an alphabet is lower
 * Return: Always 1 if c is lowercase
 * otherwise, 0 is returned
 */
int _islower(int c) /*Checks lowercase c is the character to be tested*/
{
	if (c > 96 && c < 122)
		return (1);
	else
		return (0);
}
