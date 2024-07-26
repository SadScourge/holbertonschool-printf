#include "main.h"

/**
 * _printf - Print the arguments according to format
 * @format: format of the string
 * Return: Count of printed character
 */
int _printf(const char *format, ...)
{
	int index = 0;
	int count = 0;
	int (*func)(va_list);
	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);
	while (format[index])
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
			{
				_putchar('%');
				count++;
			}
			func = get_format(&format[index]);
			if (func != NULL)
			{
				count += func(args);
				index++;
			}
			else
			{
				_putchar('%');
				_putchar(format[index]);
				count += 2;
				index++;
			}
		}
		else
		{
			_putchar(format[index]);
			index++;
			count++;
		}
	va_end(args);
	return (count);
}
