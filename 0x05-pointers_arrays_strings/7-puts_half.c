#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string parameter
 * Retun: 0 on success
 */
void puts_half(char *str)
{
	int length_of_the_string = strlen(str);
	int p;
	int i;

	if ((length_of_the_string % 2) == 0)
	{
		for (i = (length_of_the_string / 2); i <= length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (p = (length_of_the_string - 1) / 2; p <= length_of_the_string; p++)
			_putchar(str[p]);
	}


}
