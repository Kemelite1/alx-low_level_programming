#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - This is a function that creates a file
 * @filename: pointer to file name
 * @text_content: pointer to string to be written to file
 * Return: 1 if successful, -1 on failure to create file or file
 * cannot be written
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length];)
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, length);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
