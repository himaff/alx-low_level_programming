#include "main.h"

/**
 * print_line - Draw line
 * @n: Number of char _ should print
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);
		_putchar('\n');
	}
}
