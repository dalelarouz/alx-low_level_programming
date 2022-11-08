#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints the minimum number of coins to make change
* @argc: the number of command-line arguments
* @argv: an array of strings that contain the command-line arguments
* Return: returns 0 (sucessful), otherwise returns 1 on error
*/
int main(int argc, char *argv[])
{
	int coins;
	int quarters_25, dimes_10, nickels_5, pennies_2, cents_1;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);

	if (coins < 0)
	{
		printf("0\n");
		return (0);
	}
	quarters_25 = coins / 25;
	coins = coins - (quarters_25 * 25);

	dimes_10 = coins / 10;
	coins = coins - (dimes_10 * 10);

	nickels_5 = coins / 5;
	coins = coins - (nickels_5 * 5);

	pennies_2 = coins / 2;
	coins = coins - (pennies_2 * 2);

	cents_1 = coins / 1;

	change = quarters_25 + dimes_10 + nickels_5 + pennies_2 + cents_1;
	printf("%d\n", change);
	return (0);
}
