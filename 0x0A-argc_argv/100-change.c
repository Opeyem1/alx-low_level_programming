#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Calculates the minimum number of coins needed to make change
 * for a given amount of money
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int amount, i, result;
    int coins[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    amount = atoi(argv[1]);
    result = 0;

    if (amount < 0)
    {
        printf("0\n");
        return 0;
    }

    for (i = 0; i < 5 && amount >= 0; i++)
    {
        while (amount >= coins[i])
        {
            result++;
            amount -= coins[i];
        }
    }

    printf("%d\n", result);
    return 0;
}
