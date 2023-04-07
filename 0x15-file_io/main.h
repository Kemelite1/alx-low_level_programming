#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h> /** defines a collection of typedef symbols and structures */
#include <sys/stat.h> /** contains constructs that facilitate getting information about file attributes */
#include <fcntl.h> /** for file control */
#include <unistd.h> /** defines miscellaneous symbolic constants and types and declares miscellaneous functions */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
