#include <stdio.h>
/**
 * main -entry
 * Return: 0 always
 */

int main(void)
{
	int x;
	int y;

	x = '0';
	y = '0';

	for (y = '0'; y <= '9'; y++)/* this are the ones digits*/
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (!((x == Y) || (y > x)))
			{
				putchar(y);
				putchar(x);
				if (!(x == '9' && y == '8'))
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
