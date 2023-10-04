#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: filename.
 *
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fld;
	int nletters;
	int rw;

	if (!filename)
		return (-1);

	fld = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fld == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rw = write(fld, text_content, nletters);

	if (rw == -1)
		return (-1);

	close(fld);

	return (1);
}
