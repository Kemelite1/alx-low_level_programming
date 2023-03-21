#include <stdio.h>
		
#include "main.h"
		
		
/**
		
 * _putchar - writes the character c to stdout
		
 * @c:This is the character to print
		
		
 * Return: 1 when successful.
		
 * On error, -1 is returned and errno is set appropriately.
		
 */
		
int _putchar(char c)
		
{
		
return (write(1, &c, 1));
		
}
