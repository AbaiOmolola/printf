#include "main.h"

/**
 * print_char - prints character
 * @list: list of argumrnt
 * Return: will return the of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
