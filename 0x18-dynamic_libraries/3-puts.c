#include "main.h"

/**
 * _puts -> a function that puts
 * @str: a param to put
*/

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
