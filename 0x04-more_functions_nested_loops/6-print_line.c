#include "main.h"
#include <stdio.h>
/**
 * print_line - function that draws a line
 * @n: parameter to be printed
 * Return 0 when succesful
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
