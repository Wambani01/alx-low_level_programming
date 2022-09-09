#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)

{
	char c; 
	
	c = 'a'; 


	for ( c <= 'z')
	{
		putchar(c);
		c++;
	}

	return (0);
}

