#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for integer
 * @array: array
 * @size: number of elements
 * @cmp: pointer
 *
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n, count;

	count = 0;
	if (array != NULL && cmp != NULL)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]) != 0)
			{
				count++;
				return (n);
			}
		}
	}
	if (size <= 0 || count == 0)
		return (-1);
	else
		return (0);
}
