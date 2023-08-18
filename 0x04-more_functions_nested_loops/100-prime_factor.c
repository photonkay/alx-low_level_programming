#include <stdio.h>

/**
 * largest_prime - prints out the largest prime number
 *
 *@num: is the number to be passed
 *
 * Return: Always 0 on success
 */
void largest_prime(long long int num)
{
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
}

/**
 * main - entry point
 *
 * Return: Always 0 on success
 */
int main(void)
{
	largest_prime(612852475143);

	return (0);
}
