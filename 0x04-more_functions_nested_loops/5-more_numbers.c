#include "main.h"

/**
 * more_numbers -> print 1 to 14
 * Return: 1 - 14 ten times
 */

void more_numbers(void)
{
	int counter = 0;

	while (counter <= 10)
	{
		int num = 0;

		while (num <= 14)
		{
			_putchar('0' + num);
		}
	}
	_putchar('\n');
}
