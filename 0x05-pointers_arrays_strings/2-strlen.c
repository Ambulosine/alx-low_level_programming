#include "main.h"
#include <string.h>

/**
 * _strlen -> function to check string length
 * @s: string to checked
 * Return: length of the string
*/

int _strlen(char *s)
{
	char c;
	int i;

	c = *s;
	i = 0;
	while (c != 0)
	{
		s++;
		c = *s;
		i++;
	}
	return (i);
}
