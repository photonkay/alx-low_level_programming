#include <unistd.h>

/**
 * _putchar - custom putchar function
 * @c: character to print
 * Return: ascii
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
