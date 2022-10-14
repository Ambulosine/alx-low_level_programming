#include <stdio.h>

/**
 * main - if and while together and not equals
 * Return: alphabets minus q and e
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet < 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}
