#include "main.h"

/**
 * cap_string - capitalizes words
 * @n: string
 * Return: pointer to string
 */

char *cap_string(char *n)
{
	int i, j;
	int k[] = {' ', ',', ':', '.', '?', '"', '(', ')', '{', '}', '\n', '\t'};
	int cap = 32;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == k[j])
			{
				j = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
