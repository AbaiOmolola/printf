#include "main.h"

/**
 * print_rev - prints a screen in reverse
 * @l: argument from _printf
 * Return: length of printed string
 */
int print_rev(va_list l)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	if (!s)
		s = "(null)';

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
