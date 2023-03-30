#include "main.h"

/**
 * _strcat - write a function that concatenates two strings
 *
 * @dest: - this is the output dest
 * @src: this is the input source
 *
 * Return: this return to dest, that concatenates two sstrings
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{

		dest[i] = src[j];
		i++;
	}

	return (dest);
}
