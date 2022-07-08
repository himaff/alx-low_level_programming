#include "main.h"

/**
 * _isdigit - Check for numbers
 * @c: char to check
 * Return: 1 succes or 0 fail
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
