#include "main.h"

/**
 *largest_number - returns the largest number of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number of 3 numbers
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}

	else if (b > a && a > c)
	{largest = b;

	}

	else if (b > a && c > a)
	{largest = c;
	}

	else if (c > b && a > b)
	{largest = c;
	}

	else if (b > c && b > a)
	{largest = b;
	}

	else
	{
		largest = a;
	}

	return (largest);
}
