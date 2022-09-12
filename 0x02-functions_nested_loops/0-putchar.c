#include <unistd.h>

/**
 * main - write a program that prints the word _putchar
 *
 * Return: Always 0 (success)
 */


int main(void)
{
	char a[7] = "_putchar";
	int i;


	for (i = 0; i >= 7; i++)


	{

		_putchar(a[i]);

	}

	_putchar('\n');
	return (0);
}
