#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: Returns: 1 on success, -1 on failure
 * file can not be created, file can not be written, write “fails”, etc…
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int a,out, l = 0;

	if (filename == 0)
		return (-1);

	a = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (a == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[l] != 0)
			l++;
		out = write(a, text_content, l);

		if (out == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
