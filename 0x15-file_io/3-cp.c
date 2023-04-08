#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
/**
 * copy_file - allocates 1024 bytes to a bufer
 * @dest_file: name of file buffer is storing chars
 * Return: pointer to newly allocated buffer
 */

void copy_file(char *src_file, char *dest_file)
{
	FILE *src, *dest;
	char buffer[BUFFER_SIZE];
	size_t bytes_read;

	src = fopen(src_file, "r");
	if (src == NULL) 
	{
	printf("Error: Can't read from file %s\n", src_file);
	exit(98);
	}

	dest = fopen(dest_file, "w");
	if (dest == NULL)
	{
		printf("Error: Can't write to %s\n", dest_file);
		exit(99);
	}

	while ((bytes_read = fread(buffer, sizeof(char), BUFFER_SIZE, src)) > 0) 
	{
		size_t bytes_written = fwrite(buffer, sizeof(char), bytes_read, dest);
		if (bytes_written < bytes_read) 
		{
			printf("Error: Incomplete write to %s\n", dest_file);
			exit(99);
		}
	}

	fclose(src);
	fclose(dest);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return 0;
}
