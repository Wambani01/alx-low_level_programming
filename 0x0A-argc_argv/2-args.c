#include <stdio.h>
/**
 * main - print all the arguments
 * @argc: argument counter
 * @argv: string array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%d\n", *argv);
	}
	return (0);
}
