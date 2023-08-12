#include <stdio.h>
/**
 * main- Entry point
 * code to print alphabets
 * Return 0 success value
 */
int main(void)
{
	char alpha;
	
	for(alpha = 'a'; alpha <='z'; alpha++)
		putchar(alpha);
	putchar('\n);
	return (0);
}
