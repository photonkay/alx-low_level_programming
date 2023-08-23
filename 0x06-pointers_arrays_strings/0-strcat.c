/**
**_strcat - concatenates two strings
*@dest: destination string
*@src: string to be appended
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, len_1, len_2;

	for (i = 0; dest[i] != '\0'; i++)
		++len_1;

	for (i = 0; src[i] != '\0'; i++)
		++len_2;

	for (i = 0; i < len_2; i++)
		dest[len_1 + i] = src[i];

	dest[len_1 + len_2] = '\0';
	re`turn(dest);
}
