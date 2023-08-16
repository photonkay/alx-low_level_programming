#include <stdio.h>
#include "main.h"
/**
 * _isalpha - tests if char is an alphabet
 * Return: 1 on success
 * on error, 0 is returned
 */
int _isalpha(int c) /*@c: number to pass*/
{
	if (c > 64 && c <= 90)
		return (1);
	if (c > 96 && c <= 122)
		return (1);
	else
		return (0);
}
