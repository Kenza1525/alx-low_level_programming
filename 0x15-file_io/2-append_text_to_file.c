#include "main.h"

/**
 * create_file - create a file
 C* @filename: name of the file
 * @text_content: content in the created file
 * Return: 1 on success or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int i = 0;


	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
