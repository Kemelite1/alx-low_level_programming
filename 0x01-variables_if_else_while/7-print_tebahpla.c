#include <stdio.h>
/**
 * main - a program that prints in reverse
 *
 * Return: 0 when successful
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
