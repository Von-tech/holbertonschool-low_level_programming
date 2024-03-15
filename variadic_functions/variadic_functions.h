#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct types - A structure representing a type and its corresponding function
 *
 * @t: The type identifier
 * @f: The function pointer to handle the type
 */
typedef struct types
{
	char t;
	void (*f)(va_list);
} types;

#endif
