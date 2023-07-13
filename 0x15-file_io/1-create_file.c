#include "main.h"

/**
 * create_file - Create a file and write text content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int i;
	int byteRead = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	i = i + 1;

	byteRead = write(file, text_content, i);

	if (byteRead == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
