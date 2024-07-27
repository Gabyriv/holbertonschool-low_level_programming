#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure or if filename is NULL.
 */

int create_file(const char *filename, char *text_content)
{
	int fileOpen, fileWrite, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fileOpen = open(filename, O_CREAT | O_RDWR | O_TRUNC | 0600);
	fileWrite = write(fileOpen, text_content, length);

	if (fileOpen == -1 || fileWrite == -1)
		return (-1);

	close(fileOpen);

	return (1);
}
