#include "main.h"

/**
 * main -> print fizz, buzz and fizzbuzz
 * Return: success
 */

int main(void)
{
	int count = 1;

	for (; count < 100; count++)
	{
		if (count % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("Buzz");
		}
		else if (count % 5 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", count);
		}
	}
	printf("\n");
	return (0);
}
