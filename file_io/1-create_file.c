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
	int fileOpen, fileWrite, nletters;

	if (filename == NULL)
	{
		return (-1);
	}

	fileOpen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fileOpen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (nletters = 0; text_content[nletters]; nletters++)
		;

		fileWrite = write(fileOpen, text_content, nletters);

		if (fileWrite == -1)
		{
			return (-1);
		}

		close(fileOpen);

		return (1);
}
