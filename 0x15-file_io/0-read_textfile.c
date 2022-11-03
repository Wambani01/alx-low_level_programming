#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: source file
 * @letters: the number of items
 * Return: returns the value returned by write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wrt;

	char *str = malloc(sizeof(char) * letters);

	if (str == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	rd = read(fd, str, letters);

	if (rd == -1)
	{
		return (0);
	}

	wrt = write(STDOUT_FILENO, str, rd);

	if (wrt == -1)
	{
		return (0);
	}
	free(str);
	close(fd);

	return (wrt);

}
