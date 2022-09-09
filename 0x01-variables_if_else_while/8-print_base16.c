#include <stdio.h>

/**
 * main - Entry point
 * autor: mavis
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mav;
	char eli;

	for (mav = 48; mav < 58; mav++)
		putchar(mav);
	for (eli = 'a'; eli <= 'f'; eli++)
		putchar(eli);
	putchar('\n');
	return (0);
}
