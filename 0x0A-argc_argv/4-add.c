#include <stdio.h>
#include <ctype.h>
/**
 * main - adds digits
 * @argc: argument count
 * @argv: arry of strings
 * Return: 0
 */
int main(argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("0\n");
	}
	else if
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] != isdigit(argv[i]))
			{
				printf("Error\n");
			}
		}
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			printf("%d", argv[i] + argv[i + 1]);
		}

	}
	return (0);
}

