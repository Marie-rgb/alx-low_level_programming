#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * @size_t letters:  letters is the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *
 * Return 0: if the file can not be opened or read
 *
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, in, out;
	char *c;

	if (filename == 0)
		return (0);

	c = malloc(letters + 1);

	if (c == 0)
		return (0);

	a  = open(filename, O_RDONLY);

	if (a == -1)
		return (free(c), 0);

	in = read(a, c, letters);

	if (in == -1)
		return (free(c), 0);

	c[letters] = '\0';

	out = write(STDOUT_FILENO, c, in);
	if (out == -1)
		return (free(c), 0);

	free(c);
	close(a);
	return (out);
}

