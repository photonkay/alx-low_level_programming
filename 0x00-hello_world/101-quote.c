#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * program to write something to screen
 * return: always 1(success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	/*return value is 1*/
	return (1);
}
