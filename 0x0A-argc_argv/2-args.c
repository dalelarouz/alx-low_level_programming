#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all argument it recieves
 * @argc: command line count
 * @argv: command line value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
