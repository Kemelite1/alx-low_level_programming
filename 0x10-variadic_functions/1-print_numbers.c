#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - pints numbers ffollowed by new line
 * @separator: string to be printed b/w numbers
 * @n: number of integers passed to function
 * @...: variable number of numbers to be printed
 * Return: 0 when successful
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index;

	va_start(numbers, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
