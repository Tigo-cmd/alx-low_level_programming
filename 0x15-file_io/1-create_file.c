#include "main.h"
/**
* create_file - function that creates a file.
* @filename: pointer to the file
* @text_content: content of the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file, wr, i = 0, rd;

	if (filename == NULL)
		return (-1);
	rd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (rd <= 0)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		wr = write(file, text_content, i);
		if (wr <= 0)
			return (-1);
	}

	close(file);
	return (1);
}
