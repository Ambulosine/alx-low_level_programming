#include <stdio.h>

/**
 * main - reverse alphabets
 * Return: alphabets
*/

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}
