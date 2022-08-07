#include "main.h"

/**
 * print_prec - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed
 * @list: list of arguments
 *
 * Return: Precision.
 */
int print_prec(const char *format, int *i, va_list list)
{
	int n = *i + 1;
	int prec = -1;

	if (format[n] != '.')
		return (prec);

	prec = 0;

	for (n += 1; format[n] != '\0'; n++)
	{
		if (is_digit(format[n]))
		{
			prec *= 10;
			prec += format[n] - '0';
		}
		else if (format[n] == '*')
		{
			n++;
			prec = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = n - 1;
	return (prec);
}
