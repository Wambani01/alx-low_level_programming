#include "main.h"

/**
 *  _islower - check for a lowercase letter
 *
 * @c:  is the int that will use for the argument of the function
 *
 * Return - 1 if int c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
