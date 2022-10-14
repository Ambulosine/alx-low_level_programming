#include <stdio.h>

/**
 * main - print in hundreds
 * Return: numbers
*/

int main(void)
{
	int hundren = '0';
	int ten;
	int one;

	for (; hundren <= '9'; hundren++)
	{
		for (ten = (hundren + 1); ten <= '9'; ten++)
		{
			for (one = (ten + 1); one <= '9'; one++)
			{
				putchar(hundren);
				putchar(ten);
				putchar(one);

				if (hundren != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
