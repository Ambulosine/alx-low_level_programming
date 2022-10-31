#include "main.h"

/**
  * _memset - Fill memory with a constant byte
  * @s: string
  * @b: a char
  * @n: an int
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

