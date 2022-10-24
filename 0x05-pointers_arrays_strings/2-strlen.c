#include "main.h"
#include <string.h>

/**
 * _strlen -> function to check string length
 * @s: string to checked
 * Return: length of the string
*/

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
