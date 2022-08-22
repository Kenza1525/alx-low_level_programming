#include "main.h"

/**
 * main - call cp function
 * @argc: argv count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cp(argv[1], argv[2]);

	return (0);
}

/**
 * cp - copy one file to another
 * @file_from: file to be copy
 * @file_to: file to be copied
 */
void cp(char *file_from, char *file_to)
{
	int fd, fd1, rd, wd;
	char text[1024];

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd1 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	rd = read(fd, text, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while (rd != 0)
	{
		wd = write(fd1, text, rd);
		if (wd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		rd = read(fd, text, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
	}
	cl(fd);
	cl(fd1);
}


/**
 * cl - close files
 * @f: file to be closed
 */

void cl(int f)
{
	int c;

	c = close(f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
