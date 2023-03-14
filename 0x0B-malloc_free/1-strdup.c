#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that duplicates string
 * @str: char
 * Return: 0 when successful
 */
char *_strdup(char *str)
{
	char *ccc;
	int i, c = 0;

	if (str == NULL)

		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	ccc = malloc(sizeof(char) * (i + 1));

	if (ccc == NULL)

		return (NULL);

	for (c = 0 ; str[c] ; c++)
		ccc[c] = str[c];

	return (ccc);

}
