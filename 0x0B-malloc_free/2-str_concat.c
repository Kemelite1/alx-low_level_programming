#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates strings
 * @s1: input parameter
 * @s2: input parameter
 * Return: concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, di;

	if (s1 == NULL)
		s1 =  "";
	if (s2 == NULL)
		s2 =  "";

	i = di = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[i] != '\0')
		di++;
	concat = malloc(sizeof(char) * (i + di + 1));

	if (concat == NULL)

		return (NULL);

	i = di = 0;

	while (s1[i] != '\0')
	{
		concat[i]  = s1[i];

		i++;
	}

	while (s2[di] != '\0')
	{
		 concat[i]  = s2[di];

		 i++, di++;
	}
	concat[i]  = '\0';
	return (concat);
}
