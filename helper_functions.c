#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string in place
 *  * @s: string to reverse
 *
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int lenght;
	int head;
	char tmp;
	char *dest;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{}

	dest = malloc(sizeof(char) * lenght + 1);

	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, lenght);

	for (head = 0; head < lenght; head++, lenght--)
	{
		tmp = dest[lenght - 1];
		dest[lenght - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
		_write_char(str[j]);
}

/**
 * base_len - Calculates the length for an octal number
 * @n: The number for which the length is being calculated
 * @base: Base to be calculated by
 *
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int n, int base)
{
	unsigned int j;
	for (j = 0; n > 0; j++)
	{
		n = n / base;
	}
	return (j);
}

/**
 * _memcpy - copy memory area
 * @dest: Destination to copy to
 * @src: Source to copy from
 * @n: The number of bytes to copy
 *
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	dest[k] = '\0';

	return (dest);
}
