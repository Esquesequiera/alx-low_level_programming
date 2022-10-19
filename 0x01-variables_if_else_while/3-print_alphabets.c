#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int c;

	while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
