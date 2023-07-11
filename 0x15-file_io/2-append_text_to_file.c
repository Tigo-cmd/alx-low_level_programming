#include "main.h"
/**
* append_text_to_file - appends text at the end of a file.
* @filename: pointer to file to be used
* @text_content: content to add at the end of the file
*
* Return: Always(0) success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int wr, rd, i = 0;

	if (filename == NULL)
		return (-1);
	rd = open(filename, O_WRONLY | O_APPEND);
	if (rd <= 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
		wr = write(rd, text_content, i);
		if (wr <= 0)
			return (-1);
	}

	close(rd);
	return (1);
}
