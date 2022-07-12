#include "main.h"

/**
 * base_len - calculates the lenth of octal number
 * @num: number for which length is being calculated
 * @base: base to  be calculated
 * Return: an integer representing length of numbers
 */

unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;
	for (i = 0; num > 0; i++;)
	{
		num = num / base;
	}
	return (i);
}


/**
 * rev_string - reverse a string in place
 *
 * @s: string to reverse
 * Return: a pointer to a character
 */

char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(desty, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * write_base - sends characters to be written
 * @str: string to parse
 */

void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(s[i]);
}

/**
 * _memcpy - copy memory area
 * @dest: destination for copy
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: the memcpy function to a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}


/**
 * hex_check - checks what hex function is calling
 * @num: number to convert into letter
 * @x: tells which hex function is calling
 * Return: Ascii value for letter
 */

int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	 num = num - 10;
	 if (x == 'x')
		 return (hex[num]);
	 else
		 return (Hex[num]);
	 return (0);
}
