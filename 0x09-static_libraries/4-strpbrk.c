#include "main.h"
/**
 * _strpbrk - Custom implementation of strpbrk function
 * @s: Input string
 * @accept: Set of characters to search for
 * Return: Pointer to the first occurrence of a character in accept in s,or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
