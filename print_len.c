#include "main.h"

/**
 * print_len - Calculates the size using length modifiers
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed
 *
 * Return: Size
 */
int print_len(const char *format, int *i)
{
	int n = *i + 1;
	int size = 0;

	if (format[n] == 'l')
		size = S_LONG;
	else if (format[n] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = n - 1;
	else
		*i = n;

	return (size);
}
