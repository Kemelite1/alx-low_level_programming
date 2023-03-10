#include "main.h"
/**
 * _strncpy - this is a function that copies string
 * @dest: this is the destination string
 * @src: this is the source string
 * @n: parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
		dest[i] = src[i];
	return (dest);
}
