#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - If else statement and math operation
 * Return: last digit
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i and is ", n, (n % 10));
	if ((n % 10) == 0)
	{
	printf("0\n");
	}
	else if ((n % 10) < 6)
	{
	printf("less than 6 and not 0\n");
	}
	else
	{
	printf("greater than 5\n");
	}
	return (0);
}
