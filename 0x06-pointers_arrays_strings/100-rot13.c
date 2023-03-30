#include "main.h"

/**
 * rot13 - write a function that oncodes a string using rot13
 *
 * @hi: this is my input string
 *
 * Return: string converted to rot13
 *
 */

char *rot13(char *hi)
{
	int index, count;

	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mayus[] = "NOPQRSTUVWXYZABCDEFJHIJKLMnopqrstuvwxyzabcdefjhijklm";

	for (index = 0; hi[index] != '\0'; ++index)
	{
		for (count = 0; minus[count] != '\0'; count++)
		{
			if (hi[index] == minus[count])
			{
				hi[index] = mayus[count];
				break;
			}
		}
	}

	hi[index] = '\0';
	return (hi);
}
