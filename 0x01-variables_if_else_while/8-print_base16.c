#include <stdio.h>

/**
 * main - base 16 characters
 * Return: 16 characters
*/

int main(void)
{
	char alphabet = 'a';

	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
