#include <function_pointers.h>
#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
