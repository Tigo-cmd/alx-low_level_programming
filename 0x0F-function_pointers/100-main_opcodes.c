#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @num: number of bytes
* Description: A program that prints the opcodes of its own main function.
*
* Return: 0(success)
*/
void main_opcode(int num);
int main(int argc, char *argv[])
{
	int a;

	argc = argc - 1; /*sets argc to 0 default*/
	if (argc != 1)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_opcode(a);
	return (0);
}
/**
* main_opcode - gets and print out the opcode of main function
* @num: number of bytes passed as argumment
*
* Return: 0(success)
*/

void main_opcode(int num)
{
	int i;
	unsigned char *f = (unsigned char *)main;

	while (i < num)
	{
		printf("%02x ", f[i]);
		i++;
	}
	printf("\n");
}
