#include <stdio.h>

/**
 * main - 16 characters
 * Return: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
*/

int main(void)
{
	int number = '0';

	for (; number <= '9'; number++)
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
