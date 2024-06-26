#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - adds new content to existing file
 * @filename: variable pointer
 * @text_content: content file
 * Return: 1 on success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
