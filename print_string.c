#include "main.h"

/**
 * print_string  - prints a string
 * @list: list of argument
 * Return: will return the amount of character
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
