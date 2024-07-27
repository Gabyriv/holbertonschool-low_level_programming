#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int length = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[length] != '\0')
	{
		length++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, length);

	return (1);
}

