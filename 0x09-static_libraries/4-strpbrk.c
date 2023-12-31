#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes;
 * @s: string to search through
 * @accept: string to find
 * Return: pointer to the byte that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}
