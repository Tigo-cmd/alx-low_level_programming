#include "main.h"
/**
* main - Entry point
* @ac: number of argument passed
* @av: pointer to the first element of the argument array
*
*
* Description: A program that copies content of a file to another file
* Return: return values for different error messages
*/

int main(int ac, char **av)
{
	ssize_t rd, wr, rd2;
	char *buff;
	int file;
	/* sets the ac to 0 for easy implementation */
	ac = ac - 1;
	if (ac != 2)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = (char *)malloc(sizeof(char *) * 1024);
	if (buff == NULL)
	{
		free(buff);
		return (-1);
	}
	file = open(av[1], O_RDONLY);
	rd2 = read(file, buff, 1024);
	if (av[1] == NULL || rd2 <= 0 || file == -1)
	{
		close(file);
		dprintf(2, "Error: can't read file from file %s\n", av[1]);
		exit(98);
	}
	rd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	wr = write(rd, buff, 1024);
	if (wr <= 0)
	{
		dprintf(2, "Error: can't write to %s\n", av[2]);
		exit(99);
	}
	if (!close(file))
	{
		dprintf(2, "Error: can't close %d\n", file);
		exit(100);
	}
	free(buff);
	close(file);
	close(rd);
	return (0);
}
