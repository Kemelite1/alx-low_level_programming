#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the number from 0 to 14
 *
 * Return: 0 when successful
 */
void more_numbers(void)
{
	int i;
	int m;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (m = 0 ; m <= 14 ; m++)
		{
			if (m >= 10)
				putchar('1');
			putchar(m % 10 + '0');
		}
		putchar('\n');
	}
}
