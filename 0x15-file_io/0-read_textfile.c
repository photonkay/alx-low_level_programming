#include "main.h"

/**
 * read_textfile - reads a textfile and prints it
 * @filename: name of the file to read
 * @letters: number of letters to read
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t char_read, char_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	char_read = read(fd, buffer, letters);
	if (char_read == -1)
		return (0);

	char_written = write(STDOUT_FILENO, buffer, char_read);
	if (char_written == -1 || char_written != char_read)
		return (0);

	close(fd);
	free(buffer);

	return (char_written);
}
