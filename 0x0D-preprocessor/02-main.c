#include <stdio.h>
/**
 * main - entry point
 * description - this is a program that
 * prints the name of the file it was
 * compiled from. followed by a new line
 * Return: 0 when successful
 */
int main(void)
{
	printf("The name of compiled file is: %s\n", __FILE__);

	return (0);
}
