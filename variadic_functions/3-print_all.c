#include <stdio.h>
#include "variadic_functions.h"
/**
 * t_char - print a character
 *@va:character
 *t_integer - print a character
 *t_float - print a character
 *t_string - print a character
 *t_all - print a character
 *
 * Return: no return
 */

void t_char(va_list va)
{
	int c = va_arg(va, int);

	printf("%c", c);
}

void t_integer(va_list va)
{
	int num = va_arg(va, int);

	printf("%d", num);
}

void t_float(va_list va)
{
	double f = va_arg(va, double);

	printf("%f", f);
}

void t_string(va_list va)
{
	char *s = va_arg(va, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

void print_all(const char * const format, ...)
{
	types difftypes[] = {
		{'c', t_char},
		{'i', t_integer},
		{'f', t_float},
		{'s', t_string}
	};

	va_list valist;
	unsigned int i, j;
	char *sep = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == difftypes[j].t)
			{
				printf("%s", sep);
				difftypes[j].f(valist);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}

