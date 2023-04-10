#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments (unused)
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    /* Print the name of the program */
	printf("%s\n", *argv);

	return (0);
}
