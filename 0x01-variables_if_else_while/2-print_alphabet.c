#include <stdio.h>

/**
 * main - while loop
 * Return: a-z in small letter
 */

int main(void)
{
	char start = 'a';

	while (start < 'z')
	{
		putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
