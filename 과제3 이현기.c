#include <stdio.h>
int main()
{
	int line, star, a, b;
	for (star = 1; star <= 9; star++)
		printf("*");
	printf("\n");
	for (line = 2; line <= 8; line++)
	{
		star = 0;
		printf("*");
		for (star = 2; star <= 8; star++)
			printf(" ");
		printf("*\n");
	}
	star = 0;
	for (star = 1; star <= 9; star++)
		printf("*");
	printf("\n\n");
	for (a = 0; a <=5; a++)
	{
		for (b = 0; b < 6 - a; b++)
			printf(" ");
		for (b = 0; b < 2 * a - 1; b++)
			printf("*");
		printf("\n");
	}
	for (a = 4; a > 0; a--)
	{
		for (b = 0; b < 6 - a; b++)
			printf(" ");
		for (b = 0; b < 2 * a - 1; b++)
			printf("*");
		printf("\n");
	}
}