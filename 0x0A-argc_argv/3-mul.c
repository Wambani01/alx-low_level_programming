#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc : arguments counter
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[i]) * atoi(argv[i + 1]));
	}
	return (0);
}
