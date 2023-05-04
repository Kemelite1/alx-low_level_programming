#include <stdio.h>
#include "main.h"
/**
 * get_endianness - a function that checks for the sequence in which
 * bytes is stored in memory. Endianness can be either big or small
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *a = (char *) &b;

	return (*a);
}
