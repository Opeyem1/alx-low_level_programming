#include "main.h"

/**
 * _isupper - Check if a character is uppercase
 * @c: Character to check
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
