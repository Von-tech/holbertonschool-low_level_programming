#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')

	{
		length++;
		s++;
	}

	for (; length >= 0; length--)

	{
		_putchar (*s);
		s--;
	}

	_putchar('\n');
}

