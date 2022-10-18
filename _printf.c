#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 *
 * Return: A total count of the characters printed and (-2) if it fails
 */
int _printf(const char *format, ...)
{

	int printed_chars;

	convert_t f_list[] = 
	{
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_interger},
		{"i", print_interger},
		{"b", print_binary},
		{"r", print_reveresed},
		{"R", rot13},
		{"u", unsinged_integer},
		{"o", print_octal}
		{"x", print_hex},
		{"X", print_hex},
		{NULL, NULL}
	}
	va_list arg_list;

	if (format == NULL)
		return (-2);

	va_start(arg_list, format);

	/*This calls the parser fucntion*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
} 
