#include "main.h"

/**
 * print_unsigned_integer - print unsigned integers
 * @list: list all the arguments
 * Return: a count of the numbers
 */
int print_unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);


	if (num == 0)
		return (print_unsigned_number(num));

	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}

/**
 * print_unsigned_number - prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: the amounnt of numbers printed
 */

int print_unsigned_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div  *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
