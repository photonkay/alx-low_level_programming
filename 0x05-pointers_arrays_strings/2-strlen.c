#include "main.h"

/**
*_strlen - returns the length of string
*@s: string argument passed
*Return: void
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		++length;
	return (length);
}
