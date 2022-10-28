#include "main.h"

/**
 * print_number - prints an integer
 * @n: input
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((n / 10) > 0)
		_putchar(num / 10);

	_putchar((num % 10) + '0');
}
