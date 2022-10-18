#include "main.h"

/**
 * _write_char - writes the character represented by c to stdout
 * @c: the character to be printed
 *
 * Return: 1 on success and -1 when failed with error umber (errno)
 * set appropriately.
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
