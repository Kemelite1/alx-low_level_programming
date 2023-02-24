#include "main.h"
#include <stdio.h>
/**
 * print_square - function to print a square
 *
 * @size: this is the size
 *
 * Return: 0 when successful
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, m;

		for (i = 0 ; i < size ; i++)
		{
			for (m = 0 ; m < size ; m++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
