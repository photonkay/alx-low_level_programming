#include "main.h"

/**
 * file_error - handles error in opening files
 * @file_from: first file
 * @file_to: second file
 * @argv: argument pointer
 * Return: void
 */
void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program copies the content of a file to another
 * @argc: argument count
 * @argv: argument vector/array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchar, fwrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_from, buffer, 1024);
		if (nchar == -1)
			file_error(-1, 0, argv);
		fwrite = write(file_to, buffer, nchar);
		if (fwrite == -1)
			file_error(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
