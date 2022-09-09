#include <stdio.h>

/**
 * main - Entry point
 * author: mavis
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mav;

	for (mav = 'z'; mav >= 'a'; mav--)
		putchar(mav);
	putchar('\n');
	return (0);
}
