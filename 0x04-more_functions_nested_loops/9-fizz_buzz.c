#include "main.h"
#include <stdio.h>

/**
 * main -print fizzbuzz
 * Return: o always
 *
 */

int main(void)
{
	int i;

	printf(" ");

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("Fizz Buzz");
		}
		else
		{
			printf("%d\n", i);
		}
	}
	return (0);
}
