#include "main.h"

/**
*rev_string - reverses string
*@s: string argument passed
*Return: void
*/
void rev_string(char *s)
{
	int start, length = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	while (start < (length - 1))
	{
		temp = s[start];
		s[start] = s[(length -1)];
		s[(length - 1)] = temp;

		start++;
		length--;
	}
}
