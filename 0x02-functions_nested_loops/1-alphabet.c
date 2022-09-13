#include "main.h"

/**
 * main - Entry point
 * description - a function that prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char mavis;

	for (mavis = 'a'; mavis <= 'z'; mavis++)
	{
		_putchar(mavis);
	}
	_putchar('\n');
	return (0);
}
