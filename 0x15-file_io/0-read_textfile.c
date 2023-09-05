#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This actually reads text file print to STDOUT.
 * @filename: This is actualy the text file being read
 * @letters: This is the num of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t p;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	p = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, p);

	free(buf);
	close(fd);
	return (w);
}
