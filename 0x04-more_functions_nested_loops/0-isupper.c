#include "main.h"

/* _isupper - checks for upper case letters
 * @c: character to be checked
 * Return: 1 for uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c => 'A') && (c =< 'Z'))
	{
		return (1);
	}
	return (0);
}
