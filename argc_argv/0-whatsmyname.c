#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of sittings representing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	print_name(argv[0]);

	return (0);
}
