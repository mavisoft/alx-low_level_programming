#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed to main
 * @argc: number of actual parameter passed to main
 * @argv: pointer to the first element passed to main
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return 0:
}
