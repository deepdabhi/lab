#include <stdio.h>

int main()
{
	FILE *fptr1, *fptr2;
	char c;

	fptr1 = fopen("a.txt", "r");

	fptr2 = fopen("b.txt", "w");

	c = getc(fptr1);
	while (c != EOF)
	{
		putc(c, fptr2);
		c = getc(fptr1);
	}

	printf("\nContents copied successfully");

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
