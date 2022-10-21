#include "main.h"

/**
 * print_most_numbers - Prints 0 to 9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if (!(c == 2 || c == 4))
			_putchar(a++ + '0')
	}
	_putchar('\n');
}
