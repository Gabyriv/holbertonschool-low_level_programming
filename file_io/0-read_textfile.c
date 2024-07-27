#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letter it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 *			If the file can not be opened or read, return 0.
 *			If filename is NULL, return 0.
 *			If write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_to_read, fd_to_write, fd_to_open;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	fd_to_open = open(filename, O_RDONLY);
	fd_to_read = read(fd_to_open, buffer, letters);
	fd_to_write = write(STDOUT_FILENO, buffer, fd_to_read);

	if (fd_to_open == -1 || fd_to_read == -1 || fd_to_write == -1)
	{
		free(buffer);
		return (0);
	}

	if (fd_to_write != fd_to_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd_to_open);

	return (fd_to_write);
}
