#include "main.h"
#include <math.h>

/**
 * factorial - Returns the factorial of a given number.
 * @n: The given number.
 *
 * Return: -1 to indicate an error if @n is lower than 0.
 */

int factorial(int n)
{
	int r = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	r *= factorial(n - 1);
	return (r);
}
