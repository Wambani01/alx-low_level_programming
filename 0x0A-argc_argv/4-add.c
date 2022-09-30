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

	for (i = 1; i < argc - 1; i++)
	{
		if (argc < 2)
		{
			printf("Error\n");
		}
		if (atoi(argv[i]) != isdigit(atoi(argv[i])))
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

