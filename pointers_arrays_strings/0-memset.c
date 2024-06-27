#include "main.h"

/**
 * _memset - fills the memory witha constant byte.
 * @s: A pointer to a memory area to be filled
 * @b: The constant byte.
 * @n: The byte to be filled
 *
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;
	unsigned char *memory = (unsigned char *)s;
	unsigned char value = (unsigned char)b;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return ((char *)memory);
}
