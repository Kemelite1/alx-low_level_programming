#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers 0 to 9
 *
 *
 * Return: 0 when successful
 */
void print_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
