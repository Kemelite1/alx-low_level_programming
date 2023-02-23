#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints from 0 - 9 except 2 and 4
 *
 * Return: 0 when successful
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (!(i == '2' || i == '4'))
			putchar(i);
	}
	putchar('\n');
}
