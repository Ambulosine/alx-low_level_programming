#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - if else statement
 *Return: Negative, zero or poistive
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	}
	return (0);
}

