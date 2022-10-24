#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: the string to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
