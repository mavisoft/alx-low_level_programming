#include <stdio.h>

/**
 * main - Entry point
 * author: mavis
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mav;

	for (mav = 48; mav < 58; mav++)
	{
		putchar(mav);
		if (mav != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
