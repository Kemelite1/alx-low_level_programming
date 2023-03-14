#include "main.h"
/**
 * *_strncpy - function that copies string
 * @dest: this is the destination string
 * @sr
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
		dest[i] = src[i];
	return (dest);
}
