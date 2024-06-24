#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: the string to be printed
 */

void puts_half(char *str)
{
	int i = 0;
	int l = 0;
	int n;

	while (str[i++])
		l++;

	if ((l % 2) == 0)
		n = l / 2;
	else
		n = (l + 1) / 2;
	for (i = n; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
