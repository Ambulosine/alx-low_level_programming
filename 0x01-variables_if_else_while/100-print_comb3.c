#include <stdio.h>

/**
 * main - multiple for loops
 * Return: tens and ones
*/

int main(void)
{
	int ones = '0';

	int tens;

	for (; ones <= '9'; ones++)
	{
		for (tens = (ones + 1); tens <= '9'; tens++)
		{
			putchar(ones);
			putchar(tens);

			if (tens != '9' || ones != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

