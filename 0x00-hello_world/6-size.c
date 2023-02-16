#include <stdio.h>

/**
 * main - main function
 *
 * Return: o when successful
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	prntf("Size of a long int: %lu byte(s)", sizeof(long int));
	prntf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	prntf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
