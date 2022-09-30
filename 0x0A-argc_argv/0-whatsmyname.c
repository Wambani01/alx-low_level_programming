#include "main.h"
#include <stdio.h>
/**
* main - Program that prints its name, followed by a new line.
* @argc: Number of command lines arguments.
* @argv: Character of arrays.
*
* Return: 0.
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
