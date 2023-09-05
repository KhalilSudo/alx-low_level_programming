#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define MAXSIZE 3000

/**
 * exit_error - Prints error messages and exits with a specific status.
 * @status: The status code representing the type of error.
 * @arg: The argument associated with the error.
 */
void exit_error(int status, const char *arg)
{
	switch (status)
	{
	case 97:
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
		break;

	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
		exit(98);
		break;

	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
		exit(99);
		break;

	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", arg[1]);
		exit(100);
		break;

	default:
		break;
	}
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, otherwise exits with an error status.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buff[MAXSIZE];
	int nr_stats, nw_stats, nc_stats;

	if (argc != 3)
		exit_error(97, NULL);

	if (strcmp(argv[1], argv[2]) == 0)
	{
	dprintf(STDERR_FILENO, "Error: Source and destination files are the same\n");
	exit(100);
}


	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit_error(98, argv[1]);

	nr_stats = read(file_from, buff, MAXSIZE);
	if (nr_stats == -1)
		exit_error(98, argv[1]);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND);
	if (file_to == -1)
		exit_error(99, argv[2]);

	nw_stats = write(file_to, buff, (ssize_t)nr_stats);
	if (nw_stats == -1)
		exit_error(99, argv[2]);

	nc_stats = close(file_from);
	if (nc_stats == -1)
		exit_error(100, argv[1]);

	nc_stats = close(file_to);
	if (nc_stats == -1)
		exit_error(100, argv[2]);

	return (0);
}

