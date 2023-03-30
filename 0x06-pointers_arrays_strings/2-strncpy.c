#include "main.h"

/**
 * _strncpy - write a function that copies a string, with number of bytes
 * @dest: this is the ouput dest
 * @src: this is the input string
 * @n: this is the number of bytes tocopy
 *
 * Return: if the strings are equals return "0", if not return other numbers
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
