#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to the content to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (!filename)
	return (-1);

	if (!text_content)
	text_content = "";

	while (text_content[len])
	len++;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
	return (-1);

	if (write(file, text_content, len) == -1)
	{
	close(file);
	return (-1);
	}

	close(file);
	return (1);
}

