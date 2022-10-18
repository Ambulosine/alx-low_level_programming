#include "main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int row;
	int column;
	int mult;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			mult = (row * column);

			if (column == 0)
			{
				_putchar('0' + mult);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mult);
			}
			else if (mult > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
			}
		}
		_putchar('\n');
	}
}
