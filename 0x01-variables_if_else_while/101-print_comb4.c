#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i;
	int a;
	int b;

	for (i = 0 ; i < 10 ; i++)
	{
		for (a = 1 ; a < 10 ; a++)
		{
			for (b = 2 ; b < 10 ; b++)
			{
				if (i < a && a < b)
				{
					putchar(i + '0');
					putchar(a + '0');
					putchar(b + '0');
					if (i + a + b != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
