#include "main.h"

/**
 * print_most_numbers -> print 1 - 9 aside 2 and 4
 * Return: numbers
 */

void print_most_numbers(void)
{
	int counter = 0;

	for (; counter <= 9; counter++)
		if (counter != 2 && counter != 4)
			_putchar('0' + counter);
	_putchar('\n');
}
