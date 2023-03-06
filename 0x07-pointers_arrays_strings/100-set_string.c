#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: parameter pointer
 * @to: char parameter
 * Return: 0 when successful
 */
void set_string(char **s, char *to)
{
	*s = to;
}
