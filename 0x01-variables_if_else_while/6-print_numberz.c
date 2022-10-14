#include <stdio.h>

/**
 * main - looping characters with putchar
 * Return: numbers
*/

int main(void)
{
	int number = '0';

	for (; number <= '9'; number++)
		putchar(number);

	putchar('\n');
	return (0);
}
