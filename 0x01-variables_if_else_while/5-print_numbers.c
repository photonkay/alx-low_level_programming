#include <stdio.h>
/**
 * main - Entry point
 *
 * from 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	return (0);
}
