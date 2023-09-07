#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: least number
 * @max: largest number
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
	free(arr);
}
