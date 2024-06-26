#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: the string  to get the length of
 *
 * Return: the length of @s
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
