#include <stdio.h>
/**
 * main - entry point
 * description - this is a program that prints single digit numbers
 *
 * Returrn: 0 when successful
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
