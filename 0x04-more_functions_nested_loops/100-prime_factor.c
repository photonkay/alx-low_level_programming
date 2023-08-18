#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: Program prints out largest prine factor
 *
 * Return: Always 0 on success
 */
int main(void)
{
	unsigned long long int num = 612852475143;
	unsigned long long int largestPrimeFactor = 2;

	while (num > largestPrimeFactor)
	{
		if (num % largestPrimeFactor == 0)
		{
			num = num / largestPrimeFactor;
		}
		else
		{
			largestPrimeFactor++;
		}
	}

	printf("%llu\n", largestPrimeFactor);
	return (0);
}
