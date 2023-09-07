#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory array
 * @nmemb - array
 * @size: number of bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, size * nmemb);
	return (ptr);
	free(ptr);
}
