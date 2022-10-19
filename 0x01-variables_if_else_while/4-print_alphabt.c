#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * Return: 0 always
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
