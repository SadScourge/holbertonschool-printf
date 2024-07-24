#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

typedef struct format_list
{
	char *form_specifier;
	int (*function)(va_list);
} form_l;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_format(const char *format))(va_list);
int print_character(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif