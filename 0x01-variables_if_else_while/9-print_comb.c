#include <stdio.h>
/**
 * main - entry
 * Return: 0 always
 */

int main(void)
{
	int x;

	for (x = 0; x < 100; x++)
	{
		putchar(x + '0');
		if (x < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

