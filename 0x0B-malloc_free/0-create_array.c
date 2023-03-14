#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array and initializes
 * @size: length of array
 * @c: character to initialize
 * Return: NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		str[i] = c;
	return (str);
}
