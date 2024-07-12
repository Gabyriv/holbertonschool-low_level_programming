#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Return: If separator is NULL, don't print it.
 *          If one of the strings is NULL, print (nil).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
str = va_arg(list, char *);
if (str == NULL)
str = "(nil)";
if (separator == NULL)
printf("%s", str);
else
printf("%s%s", str, separator);
}
printf("\n");
va_end(list);
}
