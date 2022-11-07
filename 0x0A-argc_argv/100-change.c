#include "main.h"

/**
 * main - function
 * @argc: length of argv
 * @argv: number of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int position, total, change = aux = 0;
	int coins[] = {25, 10, 5, 2, 1};

	position = total = change aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	total = atoi(argv[1]);/*convert str to int*/

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
}
