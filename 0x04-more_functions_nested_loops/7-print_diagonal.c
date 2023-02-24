#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function that draws a diagonal line
 * @n: parameter to be printed
 *
 * Return: 0 when successful
 */
void print_diagonal(int n)

{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, m;

		for (i = 0 ; i < n ; i++)
		{
			for (m = 0 ; m < n ; m++)
			{
				if (m == i)
					putchar('\\');
				else if (m < i)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}
