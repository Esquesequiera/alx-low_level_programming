#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: string
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int i, j;
	int k[] = {' ', ',', ':', '.', '?', '"', '(', ')', '{', '}', '\n', '\t'};
	int cap = 32;

	for (i = 0; str[i] != '\n'; str++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - cap;
		}

		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (str[i] == k[j])
			{
				j = 12;
				cap = 32;
			}
		}
	}
	return (str);
}
