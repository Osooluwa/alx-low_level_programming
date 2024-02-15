#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Pointer to the name of the file
 * @text_content: string to add at file end
 * Return: If the file fails or is NULL - -1
 * If th file does not exist or user lacks write permission - -1
 * otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	 o = open(filename, O_WRONLY | O_APPEND);
	 w = (write(o, text_conten, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
