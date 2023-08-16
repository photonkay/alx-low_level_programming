#include <stdio.h>
#include "main.h"

/**
 * function _islower(int c) - checks if an alphabet is lower
 * @c: is the character to be tested
 *
 * Return: Always 1 if c is lowercase
 * otherwise, 0 is returned
 */
int _islower(int c) /* function checks if an alphabet is lowercase @c is the charater to be tested*/
{
	if (c > 96 && c < 122)
		return (1);
	else
		return (0);
}
