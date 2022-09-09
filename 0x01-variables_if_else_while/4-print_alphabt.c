#include <stdio.h>

/**
 * main - Entry point
 * author: mavis
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mav;

	for (mav = 'a'; mav <= 'z'; mav++)
	{
		if (mav != 'q' && mav != 'e')
			putchar(mav);
	}
	putchar('\n');
	return (0);
}
