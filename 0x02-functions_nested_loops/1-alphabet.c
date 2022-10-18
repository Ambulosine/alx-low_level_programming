#include "main.h"

/**
* print_alphabet - Print Alphabets in lower case
* Return:  Success Always
*/

void print_alphabet(void)
{
	int start = 'a';

	while (start <= 'z')
	{
	_putchar(start);
	start++;
	}
	_putchar('\n');
}
