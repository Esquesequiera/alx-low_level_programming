#include "3-calc.h"

/**
 * main - return result of desired calculation from command line options
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*op_func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = op_func(num1, num2);
	printf("%d\n", calc);

	return (0);
}
