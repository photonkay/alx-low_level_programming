#include "main.h"

/*function prototype*/
int is_divisible(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be tested
 * Return: 1 if prime otherwise 0 is returned
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_divisible(n, n - 1));
}

/**
 * is_divisible - checks if a number is divisible by number > 1
 * @n: number to test
 * @i: divisor
 * Return: 1 if divisible by a number, otherwise 0 is returned
 */
int is_divisible(int n, int i)
{
	if (i == 1)
		return (0);
	if (n % i == 0)
		return (1);
	return (is_divisible(n, i - 1));
}
