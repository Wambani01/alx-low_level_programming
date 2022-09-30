#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * main - adds digits
 * @argc: argument count
 * @argv: arry of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("0\n");
	}
	else if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			if ((atoi(argv[i]) != isdigit(atoi(argv[i]))))
			{
				printf("Error\n");
			}
			else
			{
				 printf("%d\n", atoi(argv[i]) + atoi(argv[i + 1]));
			}
		}
	}
	return (0);
}

