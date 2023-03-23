#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: number of parameters passed to function
 * @...: variable number of parras to calculate the sum
 * Return: if n == 0 -0, if otherwise, the sum of all paras
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	for (i = 0 ; i < n ; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
