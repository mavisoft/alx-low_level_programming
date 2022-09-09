#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char mavis;

	for (mavis = 'a'; mavis <= 'z'; mavis++)
	{
		putchar(mavis);
	}
	putchar('\n');
	return (0);
}
