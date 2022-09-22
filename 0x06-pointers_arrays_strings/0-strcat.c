#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	char dest[] = "Hello ";
	char src[] = "World!";
	printf("Concatenated String: %s\n",  _strcat(dest,src));
	return 0;
}
