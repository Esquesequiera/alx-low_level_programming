#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the value of the int is checked
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (n < 0)
		_putchar('0' + r);
	return (r);
}
