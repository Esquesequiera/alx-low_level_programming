#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int c;

	c = 'a';
	c = 'A';

	while (c <= 'z' || c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
