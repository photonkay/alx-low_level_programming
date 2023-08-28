#include "main.h"

/**
 * _strstr - finds occurence of substring
 * @haystack: look through me
 * @needle: fine me
 * Return: pointer 
 */
char *strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhyastack + 1;
	}
	return (0);
}
