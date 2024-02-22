#include "main.h"

/**
 * print_diagonal - Draw a diagonal line in the terminal
 * @n: The number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while (--n > 0)
		{
			_putchar(' ');
		}

		_putchar('\\');
	}

	_putchar('\n');
}
