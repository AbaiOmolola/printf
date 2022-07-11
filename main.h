#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct convert - define a structure 
 *
 * @oma: the operator
 * @f: the function associated
 */

struct convert
{
	char *oma;
	int (*f)(va_list);
};
typedef struct convert conver_t;


int _printf(const char *format, ...);
int _putchar(char c);
int format_receiver(const char *format, conver_t f_list[], va_list arg_list);
int print_percent(va_list);
