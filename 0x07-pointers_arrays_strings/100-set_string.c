#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: pointer that points to the pointer of string
 * @to: pointer that points to character
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
