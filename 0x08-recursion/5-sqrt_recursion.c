#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n); 

/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input
 * Return: Always 0 (Success)
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	 return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a nu * @n: The number to return the square root of.
 * Return: If n has a natural square root 
 *  If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	 int root = 0;

	 if (n < 0)
		  return (-1);

	  if (n == 1)
		  return (1);

	   return (find_sqrt(n, root));
}
