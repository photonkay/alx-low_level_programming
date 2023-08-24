#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int first_half, second_half, temp;

	first_half = 0;
	second_half = n - 1;

	while (first_half < second_half)
	{
		temp = a[first_half];
		a[first_half] = a[second_half];
		a[second_half] = temp;

		first_half++;
		second_half--;
	}
}
