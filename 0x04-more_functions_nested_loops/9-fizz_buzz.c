#include "main.h"
#include <stdio.h>
/**
 * main - this is the main function
 * prints the fizz-Buzz test
 *
 * Return: 0 when successful
 */
int main(void)
{
	int m;

	for (m = 1 ; m <= 100 ; m++)
	{
		if (m % 3 == 0 && m % 5 != 0)
		{
			printf(" Fizz");
		} else if (m % 5 == 0 && m % 3 != 0)
		{
			printf(" Buzz");
		} else if (m % 3 == 0 && m % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (m == 1)
		{
			printf("%d", m);
		} else
		{
			printf(" %d", m);
		}
	}
	printf("\n");

	return (0);
}
