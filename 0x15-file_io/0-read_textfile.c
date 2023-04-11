#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file and print to stdout
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);

	return (w);
}
