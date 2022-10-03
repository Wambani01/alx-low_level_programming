#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of characters
 * @size: size of the array
 * @c: character being initilaized in the string
 * Return: pointer to the string created
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
