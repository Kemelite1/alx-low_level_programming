#include "main.h"
/**
 * _isalpha - function checks for alphabetic characters
 * @c: function to be printed
 * Return: 1 if c is a letter, lowercase or uppercase 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
