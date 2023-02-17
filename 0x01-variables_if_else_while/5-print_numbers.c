#include <stdio.h>
/**
 * main - a program that prints single digit numbers of base 10 starting from 0
 *
 * Return: 0 when succesful
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
