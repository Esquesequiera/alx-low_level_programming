#include "main.h"

/**
 * print_line - line being printed '_'
 * @n: number of '_' to be printed
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}
