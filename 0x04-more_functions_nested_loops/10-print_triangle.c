#include "main.h"
#include <stdio.h>
/**
 * print_triangle - function to be printed
 * @size: this is the size of the triangle
 * Return: 0 when successful
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, m;

		for (i = 1; i <= size; i++)
		{
			for (m = i; m < size; m++)
			{
				putchar(' ');
			}
			for (m = 1; m <= i; m++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}

}
