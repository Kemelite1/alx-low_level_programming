#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void error(char *message, char *file);
void close_file(int fd);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buffer[1024];

	if (argc != 3)
	{
		error("Usage: cp file_from file_to\n", NULL);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		error(NULL, argv[1]);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		error(NULL, argv[2]);
	}

	do {
	r = read(from, buffer, sizeof(buffer));
	if (r == -1)
	{
		error(NULL, argv[1]);
	}

	w = write(to, buffer, r);
	if (w == -1)
	{
		error(NULL, argv[2]);
	}
	} while (r > 0);

	close_file(from);
	close_file(to);

	return (0);
}

/**
 * error - Prints an error message to standard error.
 * @message: The error message to print.
 * @file: The file that caused the error, or NULL if not applicable.
 */
void error(char *message, char *file)
{
	if (errno != 0)
	{
		perror("Error");
	}
	else if (message != NULL)
	{
		fprintf(stderr, "Error: %s", message);
	}
	if (file != NULL)
	{
		fprintf(stderr, " %s", file);
	}
	fprintf(stderr, "\n");
	exit(errno != 0 ? errno : 1);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		error(NULL, NULL);
	}
}
