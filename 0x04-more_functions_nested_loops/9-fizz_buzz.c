#include <stdio.h>

/**
 * main -print fizzbuzz
 * Return: o always
 *
 */

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		printf(" ");
		if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("Fizz Buzz\n");
		}
		else
			printf("%d\n", i);
	}
	return (0);
}
