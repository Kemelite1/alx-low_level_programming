#include "main.h"
#include <stdio.h>
/**
 * _isdigit - this function checks if numbers are 0-9
 *
 * @c: parameter to be checked
 *
 * Return: 1 when c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
