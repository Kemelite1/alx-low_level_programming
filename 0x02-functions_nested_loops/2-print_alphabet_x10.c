#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 * Return: 0 when successful
 */
void print_alphabet_x10(void)
{
	int i;
	char m;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (m = 'a' ; m <= 'z' ; m++)
			_putchar(m);
		_putchar('\n');
	}
}
