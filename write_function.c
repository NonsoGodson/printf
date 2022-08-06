#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 */
int _putchar(char c)
{
	static char buf[1024];
	static int n;

	if (c == -1 || n >= 1024)
	{
		write(1, &buf, n);
		n = 0;
	}
	if (c != -1)
	{
		buf[n] = c;
		n++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int n;

	for (n = 0; str[n] != '\0'; n++)
		_putchar(str[n]);
	return (n);
}
