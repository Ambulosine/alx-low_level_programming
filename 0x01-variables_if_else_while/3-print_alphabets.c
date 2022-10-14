#include <stdio.h>

/**
 *main - while loop
 *Return: Alphabets in upper and lower case
 */

int main(void)
{
	char lower = 'a';

	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
