#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char f;

	for (f = 'z'; f >= 'a'; f--)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
