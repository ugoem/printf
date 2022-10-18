#Printf

## Synopsis
This readme contains information about the printf custom function group or team of two students task.
This fucntion formats and print data parsed to it.

## Description
The _printf() function produces output according to formats described bellow
This function write its output to the (stdout), the standard output stream.
Returns the count of printed characters when the function is successful and -2 when the function fails.
Format is a character string. The format string is composed of zero or more directives.

The convertion specifiers are handled:
* %c: Prints a single character.
* %s: Prints a string of characters.
* %i: Prints integers.
* %d: Prints integers.
* Prints the binary representation of an unsigned decimal.
* %u: Prints unsigned integers
* %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
* %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
* %r: Prints a reversed string
* %R: Prints the Rot13 interpretation of a string

## Usage
* All the files are to be compiled on Ubuntu 20.04 LTS
* Codes to be compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
* mainn.h" header file must be included on the functions using the _printf()

## Example

```

#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{

	int f;
	int g;
	char *strn;

	strn = "ALX school";

	f = _printf("%r\n", "ALX"); /*expected: XLA*/
	printf("--->%d\n", f); /*expected: 4*/

	g = _printf("%r\n", strn); /*expected: loohcs XLA*/
	printf("%d\n", g); /*expected: 11*/

	return (0);
}


```

## Created By
=> Anionovo Ugochukwu

=> Njoku Ngozi
