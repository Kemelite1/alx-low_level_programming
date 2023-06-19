
#include "main.h"
/**
 * _puts - this is a function that prints a string and a new line to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
