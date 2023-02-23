#include "main.h"
/**
 * print_numbers - function that prints numbers 0 to 9
 *
 * Return: 0 when successful
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 10 ; i++)
		_putchar(i);
	
	_putchar('\n');
}
