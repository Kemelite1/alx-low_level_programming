#include <stdio.h>
/**
 * main - a program that prints in lowercase excluding q and e
 *
 * Return: 0 when successful
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
