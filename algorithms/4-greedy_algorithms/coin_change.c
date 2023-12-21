/* coin change problem */

#include <stdio.h>

void findMinCoins(int coins[], int n, int amount)
{
	int coinCount[n];
	for (int i = 0; i < n; i++)
	{
		coinCount[i] = 0;
	}

	for (int i = n - 1; i >= 0; i--)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			coinCount[i]++;
		}
	}

	printf("Coins needed: ");f
	as d
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < coinCount[i]; j++)
		{
			printf("%d ", coins[i]);
		}
	}
}

int main()
{
	int coins[] = {1, 5, 10, 25};
	int n = sizeof(coins) / sizeof(coins[0]);
	int amount = 36;

	findMinCoins(coins, n, amount);
	return 0;
}
