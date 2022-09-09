#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *Return: Always 0 (successs)
 */
int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	return (0);
}
