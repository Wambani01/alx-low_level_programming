#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'd'; a++)
	for (a = 'f'; a <= 'p'; a++)
	for (a = 'r'; a <= 'z'; a++)
	{

		putchar(a);
	}
	putchar('\n');
	return (0);
}
