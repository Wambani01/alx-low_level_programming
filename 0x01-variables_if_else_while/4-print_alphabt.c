#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)

	{	if ( a != 'q' && a != 'e')
			{

			putchar(a);
			}
	}
	putchar('\n');
	return (0);
}
