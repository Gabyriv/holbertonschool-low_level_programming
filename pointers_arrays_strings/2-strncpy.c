#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximun number of bytes to be copied
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
