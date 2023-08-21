#include "main.h"

/**
* *_strcpy - copies string into another output
*@dest: is the destination place
*@src: initial array home
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		++j;
	}
	dest[j] = '\0';

	return (dest);
}
