#include "main.h"

/**
 * print_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed
 * @list: list of arguments
 *
 * Return: width.
 */
int print_width(const char *format, int *i, va_list list)
{
	int n;
	int width = 0;

	for (n = *i + 1; format[n] != '\0'; n++)
	{
		if (is_digit(format[n]))
		{
			width *= 10;
			width += format[n] - '0';
		}
		else if (format[n] == '*')
		{
			n++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = n - 1;
	return (width);
}
