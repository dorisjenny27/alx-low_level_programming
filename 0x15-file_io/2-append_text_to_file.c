#include "main.h"

/**
 * append_text_to_file - This actually appends text at the end of a file.
 * @filename: This actually points to the name of the file.
 * @text_content: This is actually the  string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, l, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	l = write(x, text_content, len);

	if (x == -1 || l == -1)
		return (-1);

	close(x);

	return (1);
}
