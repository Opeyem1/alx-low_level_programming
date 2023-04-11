#include "main.h"
/**
 * _strspn - Custom implementation of strspn function
 * @s: Input string
 * @accept: Set of accepted characters
 * Return: Number of characters in s that are also in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
