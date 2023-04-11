#include "main.h"
/**
 * _strncpy - Copies a string.
 * @dest: Destination buffer to copy to.
 * @src: Source string to copy from.
 * @n: Number of characters to copy.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
