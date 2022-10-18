#include "main.h"
#include <stdio.h>

int hex_check(int, char);

/*
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 *
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
	unsigned int n;
	int i, lenght;
	char *str;
	char *reverse_str;

	n = va_arg(list, unsigned int);
	
	if (n == 0)
		return (_write_char('0'));
		
	if (n < 1)
		return (-1);

	lenght = base_len(n, 2);
	str = malloc(sizeof(char) * lenght + 1);
	
	if (str == NULL)
		return (-1);

	for (i = 0; n > 0; i++)
	{
		if (n % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		n = n / 2;
	}
	str[i] = '\0';
	reverse_str = rev_string(str);
	if (reverse_str == NULL)
		return (-1);
	write_base(reverse_str);
	free(str);
	free(reverse_str);
	return (lenght);
}

/**
 * print_octal - Prints the numeric representation of a number in octal base
 * @list: List of all the arguments passed to the program
 *
 * Return: Number of symbols printed to standard output
 */
int print_octal(va_list list)
{
	unsigned int n;
	int lenght;
	char *octal_rep;
	char *reverse_str;
	
	n = va_arg(list, unsigned int);

	if (n == 0)
		return (_write_char('0'));
	if (n < 1)
		return (-1);
	lenght = base_len(n, 8);

	octal_rep = malloc(sizeof(char) * lenght + 1);
	if (octal_rep == NULL)
		return (-1);
	for (lenght = 0; n > 0; lenght++)
	{
		octal_rep[lenght] = (n % 8) + 48;
		n = n / 8;
	}
	octal_rep[lenght] = '\0';
	reverse_str = rev_string(octal_rep);
	
	if (reverse_str == NULL)
		return (-1);
	
	write_base(reverse_str);
	free(octal_rep);
	free(reverse_str);
	return (lenght);
}

/**
 * print_hex - Prints a representation of a decimal number on base16 lowercase
 * @list: List of the arguments passed to the function
 *
 * Return: Number of characters printed
 */
int print_hex(va_list list)
{
	unsigned int n;
	int lenght;
	int rem_n;
	char *hex_rep;
	char *reverse_hex;

	n = va_arg(list, unsigned int);

	if (n == 0)
		return (_write_char('0'));
	if (n < 1)
		return (-1);
	lenght = base_len(n, 16);
	hex_rep = malloc(sizeof(char) * lenght + 1);

	if (hex_rep == NULL)
		return (-1);
	for (lenght = 0; n > 0; lenght++)
	{
		rem_n = n % 16;
		if (rem_n > 9)
		{
			rem_n = hex_check(rem_n, 'x');
			hex_rep[lenght] = rem_n;
		}
		else
			hex_rep[lenght] = rem_n + 48;
		n = n / 16;
	}
	hex_rep[lenght] = '\0';
	reverse_hex = rev_string(hex_rep);
	if (reverse_hex == NULL)
		return (-1);
	write_base(reverse_hex);
	free(hex_rep);
	free(reverse_hex);
	return (lenght);
}

/**
 * print_heX - Prints a representation of a decimal number on base16 Uppercase
 * @list: List of the arguments passed to the function
 * 
 * Return: Number of characters printed
 */
int print_heX(va_list list)
{
	unsigned int n;
	int lenght;
	int rem_n;
	char *hex_rep;
	char *reverse_hex;

	n = va_arg(list, unsigned int);

	if (n == 0)
		return (_write_char('0'));
	if (n < 1)
		return (-1);
	lenght  = base_len(n, 16);
	hex_rep = malloc(sizeof(char) * lenght + 1);
	
	if (hex_rep == NULL)
		return (-1);
	for (lenght = 0; n > 0; lenght++)
	{
		rem_n = n % 16;
		
		if (rem_n > 9)
		{
			rem_n = hex_check(rem_n, 'X');
			hex_rep[lenght] = rem_n;
		}
		else
			hex_rep[lenght] = rem_n + 48;
		n = n ' 16;
	}
	hex_rep[lenght] = '\0';
	reverse_hex = rev_string(hex_rep);
	
	if (reverse_hex == NULL)
		return (-1);
	
	write_base(reverse_hex);
	free(hex_rep);
	free(reverse_hex);
	
	return (lenght);
}

/**
 * hex_check - Checks which hex function is being called
 * @n: Number to convert into letter
 * @x: Tells which hex function is being called
 *
 * Return: Ascii value for a letter
 */
int hex_check(int n, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	n = n - 10;
	if (x == 'x')
		return (hex[n]);
	else
		return (hex[n]);
	return (0);
}
		
