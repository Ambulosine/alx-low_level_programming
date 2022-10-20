#include "main.h"

/**
 * print_numbers -> print numbers
 */

void print_numbers(void)
{
	int counter = 0;

	while (counter <= 9)
	{
		_putchar('0' + counter);
		counter++;
	}
	_putchar('\n');
}
