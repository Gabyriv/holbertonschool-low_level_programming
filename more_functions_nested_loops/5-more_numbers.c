#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int i, j;
	char buffer[150]; /* 15 numbers per line * 10 lines: 150 entries */

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				buffer[2 * j - 1] = (j / 10) + '0';
			buffer[2 * j] = (j % 10) + '0';
		}
		buffer[14 * (i + 1) + 1] = '\n';
	}

	/* Using _putchar three times to print the entire buffer */
	for (i = 0; i < 150; i++)
		_putchar(buffer[i]);
}
