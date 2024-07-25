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
	{
		return (-1);
	}
	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == 'c' || format[index] == 's' || format[index] == '%'
			|| format[index] == 'd' || format[index] == 'i')
			{
				func = get_format(&format[index]);
				func(args);
				count++;
				index++;
			}
		}
		else
		{
			_putchar(format[index]);
			index++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
