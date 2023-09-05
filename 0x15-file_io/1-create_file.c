#include "main.h"

/**
 * create_file - This actually creates a file.
 * @filename: This actually points to the name of the file to create.
 * @text_content: This actually points to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int gr, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	gr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(gr, text_content, len);

	if (gr == -1 || k == -1)
		return (-1);

	close(gr);

	return (1);
}
