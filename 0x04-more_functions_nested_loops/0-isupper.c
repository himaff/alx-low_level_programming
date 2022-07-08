#include "main.h"

/**
 * _isupper - Check for uppercase characters
 * @c: number to be check
 * Return: 1 success or 0 fail
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
