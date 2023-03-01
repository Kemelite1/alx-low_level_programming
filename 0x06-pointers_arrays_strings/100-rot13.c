#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int m;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}

