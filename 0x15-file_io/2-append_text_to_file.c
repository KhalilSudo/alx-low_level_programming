#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: The name of the file to append to.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int length;
	int status;

	if (text_content == NULL)
		return (1);

	if (filename == NULL)
		return (-1);

	for (length = 0; text_content[length] != '\0'; length++)
		;

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	status = write(file, text_content, length);
	if (status == -1)
		return (-1);

	close(file);

	return (1);
}


