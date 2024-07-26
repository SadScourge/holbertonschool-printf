#include "main.h"
/**
 * print_character - print a character
 * @args: argument passed to the function
 * Return: the amount of character printed
 */
int print_character(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - print a string
 * @args: argument passed to the function
 * Return: the amount of character printed
 */
int print_string(va_list args)
{
	int index;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	for (index = 0; string[index]; index++)
	{
		_putchar(string[index]);
	}
	return (index);
}

/**
 * print_percent - print the percent character
 * @args: argument passed to the function
 * Return: the amount of character printed
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * print_integer - print an integer
 * @args: argument passed to the function
 * Return: the amount of character printed
 */
int print_integer(va_list args)
{
	int number = va_arg(args, int);
	int temp, divisor = 1, length = 0;

	if (number < 0)
	{
		_putchar('-');
		length++;
		number = -number;
	}
	temp = number;
	while (temp > 9)
	{
		temp /= 10;
		divisor *= 10;
	}
	while (divisor > 0)
	{
		_putchar((number / divisor) % 10 + '0');
		divisor /= 10;
		length++;
	}
	return (length);
}
