#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar("\n");
	return (0);
}
