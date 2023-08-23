#include <stdio.h>

/**
*main - entry point
*Description: program outputs Fibonacci numbers starting from 1 and 2
*Return: always 0 on success
*/
int main(void)
{
	unsigned int term1 = 1;
	unsigned int term2 = 2;

	printf("%u, %u", term1, term2);

	for (int i = 3; i <= 98; ++i)
	{
		unsigned int nextTerm = term1 + term2;
		printf(", %u", nextTerm);
		term1 = term2;
		term2 = nextTerm;
	}

	printf("\n");
	return 0;
}
