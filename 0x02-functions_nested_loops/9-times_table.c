#include "main.h"
/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int i, j, k;

	k = i * j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			if (k <= 9)
				_putchar(' ');
			else
				_putchar(k / 10);
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
