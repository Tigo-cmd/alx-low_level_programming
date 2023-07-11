#include "main.h"
/**
* read_textfile -  reads a text file and prints it
* to the POSIX standard output.
* @filename: pointer to file to be copied
* @letters: number of letters it should print
*
* Return:  actual number of letters that can be read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buff;
	ssize_t rd, wr;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buff = (char *)malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	rd = read(file, buff, letters);
	if (rd <= 0)
	{
		close(file);
		return (0);
	}
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr != rd || wr < 0)
	{
		close(file);
		return (0);
	}
	free(buff);
	close(file);
	return (wr);
}
