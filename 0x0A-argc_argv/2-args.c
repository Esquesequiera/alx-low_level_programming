#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count Arguments
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*while - print each argument*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
