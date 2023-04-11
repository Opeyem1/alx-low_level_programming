#include "main.h"

/**
 * _abs -  Custom implementation of abs function
 * @n: The integer to compute the absolute value of
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
