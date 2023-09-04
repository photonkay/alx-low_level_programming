#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an char array and assigns it with a specific char
 * @size: size of the array
 * @c: char to be assigned
 * Return: pointere to char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0; /*iterator*/
	char *ar; /*array*/

	ar = malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
	free(ar);
}
