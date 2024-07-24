#include "main.h"

/**
 * get_format - check if the given format is found in the list
 * @format: the character corresponding to the format
 * Return: pointer to the matching function, NULL if non is found
 */
int (*get_format(const char *format))(va_list)
{
	int index;
	form_l array[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	for (index = 0; array[index].form_specifier; index++)
	{
		if (*format == *(array[index].form_specifier))
		{
			return (array[index].function);
		}
	}
	return (NULL);
}
