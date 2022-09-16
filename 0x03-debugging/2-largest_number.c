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

	else if (a > b && c > b)
	{largest = a;
	}

	else if (b > a && c > a)
	{largest = a;
	}

	else if (c > b && b > a)
	{largest = a;
	}

	else
	{
		largest = c;
	}

	return (largest);
}
