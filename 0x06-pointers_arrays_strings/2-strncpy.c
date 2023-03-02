#include "main.h"
/**
 * *_strncpy - function that copies string
 * @dest: this is the destination string
 * @src: this is the source string
 * @n: this is the number of strings
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
		dest[i] = src[i];
	return (dest);
}
