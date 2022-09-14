#include "main.h"

/**
 * _abs(int)- check for the absolute value of an integer
 *
 * @r:  is the int that will use for the argument of the function
 *
 * Return: 0 for sucess
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
