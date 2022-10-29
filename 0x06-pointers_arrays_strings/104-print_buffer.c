#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int a, d, e;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:", a);
			for (d = a; d < a + 10; d++)
			{
				if (d % 2 == 0)
					printf(" ");
				if (d < size)
					printf("%.2x", *(b + d));
				else
					printf("  ");
			}
			printf(" ");
			for (e = a; e < a + 10; e++)
			{
				if (e >= size)
					break;
				if (*(b + e) < 32 || *(b + e) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + e));
			}
			printf("\n");
		}
	}
}
