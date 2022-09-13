#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char pt[5] = "_putchar";
	int i;

	for (i = 0; i < 5; i++)
	{
		_putchar(pt[i]);
	}
		_putchar('\n');

	return (0);
}
