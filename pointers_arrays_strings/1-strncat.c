#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: The string to be concatenates upon
 * @src: The string to be concatenates upon dest
 * @n: The number of bytes.
 *
 * Return: A pointer to the resulting strings dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
