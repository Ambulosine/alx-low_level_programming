#include "main.h"

/**
 * _strcat -> this a function of strcat
 * @dest: first param
 * @src: second param
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
