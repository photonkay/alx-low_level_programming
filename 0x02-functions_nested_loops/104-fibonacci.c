#include <stdio.h>

/**
*main - entry point
*Description: program outputs Fibonacci numbers starting from 1 and 2
*Return: always 0 on success
*/
int main(void)
{
	int i;
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;

	printf("%lu, %lu", term1, term2);

	for (i = 3; i <= 98; ++i)
	{
		unsigned int nextTerm = term1 + term2;
		printf(", %lu", nextTerm);
		term1 = term2;
		term2 = nextTerm;
	}

	printf("\n");
	return 0;
}
