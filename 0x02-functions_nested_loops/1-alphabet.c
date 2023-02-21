#include "main.h"
/**
 * print_alphabet - this is a function that prints alphabets in lowercase
 *
 * Return: 0 when successful
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
