#include <stdio.h>

/**
 * main - prints its name
 * @argc: number of arguments passed to program
 * @argv: List of arguments passsed to program
 *
 * Return: 0 on Succcess
 */
int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		printf("%s\n",argv[0]);
	}
	return (0);
}
