#include "main.h"
#include <unistd>

/**
 * main - entry point
 * program to print to screen
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	write(1, str, 50);
	return (0);
}
