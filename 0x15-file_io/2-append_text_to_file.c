#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file to append text
 * @text_content: string to append
 * Return: 1 on success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int characters;
	int fwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
		return ;
	else
	{
		characters = strlen(text_content);
		fwrite = write(fd, text_content, characters);

		if (fwrite == -1)
			return (-1);
	}

	close(fd);
	return(0);
}
