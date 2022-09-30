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
	int sum = 0; 

	if (argc < 2)
	{
		printf("Error\n");
	}

	for (i = 1; i < argc - 1; i++)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");
		}
		else
		{
		 printf("%d\n", sum += atoi(argv[i]));
		}
	}
	return (0);
}

