#include "main.h"
/**
 * puts2 - this function should print only one character out of two
 * @str: input
 * Return: 0 when successful
 */
void puts2(char *str)
{
	int longi = 0;
	int k = 0;
	char *m = str;
	int i;

	while (*m != '\0')
	{
		m++;
		longi++;
	}
	k = longi - 1;
	for (i = 0 ; i <= k ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
