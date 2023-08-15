#include <unistd.h>

/**
 * main - entry point
 * program to print to screen
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar\n";

	write(1, str, sizeof(str)-1);
	return (0);
}
