#include 'main.h'
/**
 * read_textfile - Read and output the contents of a text file.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read.
 *
 * Return: The number of bytes read, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *buff;
	ssize_t byteRead = 0, byteWritten = 0;

	buff = malloc((sizeof(char) * letters) + 1);

	if (filename == NULL || buff == NULL)
		return (0);

	fptr = open(filename, O_RDONLY);

	if (fptr == -1)
		return (0);
	byteRead = read(fptr, buff, letters);

	if (byteRead == -1)
		return (0);

	byteWritten = write(STDOUT_FILEINFO, buffer, letters);
	if (byteWritten == -1 || byteWritten != byteRead)
		return (0)

	fclose(fptr);
	free(buff);

	return (byteRead);
}
