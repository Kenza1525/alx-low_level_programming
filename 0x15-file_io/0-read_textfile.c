#include "main.h"

/**
 * read_textfile - reads a txt file
 * @filename: file to be readed
 * @letters: max number of letters
 * Return: length of the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r , w;
	char *buff;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	r = read(f, buff, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
		return (0);

	free(buff);
	close(f);
	return (r);
}

