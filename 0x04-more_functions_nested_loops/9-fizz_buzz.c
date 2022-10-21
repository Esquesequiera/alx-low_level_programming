#include <stdio.h>

/**
 * main -print fizzbuzz
 * Return: o always
 *
 */

int main(void)
{
	int (n);

	for (n == 1; n <= 100; n++)
	{
		printf(" ");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
	}
	printf("\n");
	return (0);
}
