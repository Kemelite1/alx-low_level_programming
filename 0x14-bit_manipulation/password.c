#include <stdio.h>
#include "main.h"
int main(void)
{
	FILE *fp;
	char filename[] = "Hol\4";

	fp = fopen("101-password", "w");
	if (fp == NULL)
	{
		printf("unable to open file: %s\n", filename);
		return (1);
	}
	fputs(filename, fp);
	fclose(fp);
	return (0);
}
