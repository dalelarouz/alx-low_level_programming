#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that adds positive number
 * @argc: count
 * @argv: vector
 * Return: returns 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;
	int sum = 0;
	char *ptr = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		sum += strtol(argv[a], &ptr, 10);
		if (*ptr != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
