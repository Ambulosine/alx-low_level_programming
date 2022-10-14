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

	printf("Last digit of %d is %d and is ", n, (n % 10));

	if ((n % 10) < 5)
	{
	printf("less than 5\n");
	}
	else if ((n % 10) == 0)
	{
	printf("0\n");
	}
	else
	{
	printf("greater than 5\n");
	}
	return (0);
}
