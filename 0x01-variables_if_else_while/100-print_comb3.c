#include <stdio.h>
/**
 * main -entry
 * Return: 0 always
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x < y)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				if (x != 8 || y != 9)
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
