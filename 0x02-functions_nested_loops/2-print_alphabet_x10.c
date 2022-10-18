#include "main.h"

/**
*  print_alphabet_x10 - print lowercase alphabet ten times
* Return: Success
*/

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter <= 10)
	{
	int start = 'a';

	while (start <= 'z')
	{
	_putchar(start);
	start++;
	_putchar('\n');
	}
	counter++;
	}
}

