#include <stdio.h>
#include "main.h"

/**
 *_islower - checks for lowercase letters
 *@c: is the character to be tested
 * Return: Always 1 if c is lowercase
 * otherwise, 0 is returned
 */
int _islower(int c)
/*Checks if a character is lowercase letter, @c:is the character to be tested*/
{
	if (c > 96 && c < 122)
		return (1);
	else
		return (0);
}
