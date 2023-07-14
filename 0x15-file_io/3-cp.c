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
	char buff[1024];
	int file;
	/* sets the ac to 0 for easy implementation */
	ac = ac - 1;
	if (ac != 2)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file = open(av[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(2, "Error: can't read file from file %s\n", av[1]);
		exit(98);
	}
	rd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd2 = read(file, buff, 1024)) != 0)
	{
		wr = write(rd, buff, rd2);
		if (wr == -1 || rd == -1)
		{
			dprintf(2, "Error: can't write to %s\n", av[2]);
			close(file);
			exit(99);
		}
	}
	if (rd2 == -1)
	{
		dprintf(2, "Error: can't read file from file %s\n", av[1]);
		exit(98);
	}
	if (close(file) == -1)
	{
		dprintf(2, "Error: can't close %d\n", file);
		exit(100);
	}
	return (0);
}
