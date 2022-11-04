#include <stdio.h>

/**
 * main - prints all arguments passed to the program
 * @argc: represents the number of arguments passed
 * @argv: args array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
Footer

