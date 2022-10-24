#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a given string
 * @s: the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int n = strlen(s);
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_puthcar('\n');
}
