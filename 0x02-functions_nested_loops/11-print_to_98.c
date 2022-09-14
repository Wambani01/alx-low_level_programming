#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: input number
 * Return: 0 success
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n >= 98; n--)

		{
			if (n > 98)
			{
			printf("%d", n);

			printf(", ");
			}
			else if (n == 98)
			{
				printf("%d", n);
			}
		}


	}
	else if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n < 98)
			{
			printf("%d, ", n);
			}
			else if (n == 98)
			{
				printf("%d", n);
			}
		}

	}


	printf("\n");
}
