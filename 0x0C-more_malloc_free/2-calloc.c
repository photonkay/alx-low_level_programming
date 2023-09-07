#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates array memory
 * @nmemb: array
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
