#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i;
	char k;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (k = 'a' ; k <= 'f' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
