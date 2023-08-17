#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	int tempa = a;
	int tempb = b;
	int tempc = c;

	if (tempa > tempb && tempa > tempc)
	{
		largest = tempa;
	}
	else if (tempb > tempa && tempb > tempc)
	{
		largest = tempb;
	}
	else
	{
		largest = tempc;
	}

	return (largest);
}
