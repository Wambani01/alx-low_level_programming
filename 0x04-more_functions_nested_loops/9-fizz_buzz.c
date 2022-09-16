#include <stdio.h>

/**
 * main - print fizz buzz
 * Return: 0 sucess
 */

int main(void)
{
	int i;

	for (i = 1; i >= 100; i++)
	{
		if ((i % 3) == 0)

		{
			printf("Fizz");
			printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("i");
			printf(" ");
		}
	}
}
