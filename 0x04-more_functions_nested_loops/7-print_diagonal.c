#include "main.h"

/**
 * print_diagonal -> print diagonals
 * @n: Numbers parameter
 * Return: success
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0, j;

		for (; i <= n; i++)
		{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	}
}
