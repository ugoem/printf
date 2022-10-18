#include "main.h"

/**
 * print_char - prints characters
 * @list: list of arguments
 * 
 * Return: it returns the number of characters printed
 */
int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @list: list of arguments
 * 
 * Return: it returns the number of characters printed 
 */
int print_string(va_list list)
{
	int j;
	char *str;

	str = va_arg(list, char *);
	
	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j] != '\0'; j++)
		_write_char(str[j]);
	return (j);
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * 
 * Return: it returns the number of characters printed 
 * */
int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}

/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * 
 * Return:  it returns the number of characters printed.
 */
int print_integer(va_list list)
{
	int n_len;
	
	n_len = print_number(list);
	return (n_len);
}

/**
 * unsigned_integer - prints unsigned interger numbers
 * @list: list of all arguments
 *
 * Return: count of the numbers printed
 */
int unsigned_integer(va_list list)
{
	unsigned int n;
	
	n = va_arg(list, unsigned int);

	if (n == 0)
		return (print_unsigned_number(n));

	if (n < 1)
		return (-1);
	return (print_unsigned_number(n));
}
