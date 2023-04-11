#include <stdio.h>
#include "main.h"
int main(void)
{
	FILE *fpointer;
	char filename[] = "Hol\4";

	fpointer = fopen("101-password", "w");
	if (fpointer == NULL)
	{
		printf("unable to open file: %s\n", filename);
		return (1);
	}
	fputs(filename, fpointer);
	fclose(fpointer);
	return (0);
}
