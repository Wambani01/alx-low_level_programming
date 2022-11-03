#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename to be created
 * @text_content: content to write in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrt;
	int len = 0;


	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}
	else
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	wrt = write(fd, text_content, len);

	if (wrt == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);

}
