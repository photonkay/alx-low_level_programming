#include <stdio.h>
/**
 * main - Entry point
 *
 * code to print upper and lower
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char me;

	for (me = 'a'; me <= 'z'; me++)
		putchar(me);
	for (me = 'A'; me <= 'Z'; me++)
		putchar(me);
	putchar('\n');
	return (0);
}
