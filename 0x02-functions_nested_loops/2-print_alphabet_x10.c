#include "main.h"
/**
 * print _alphabet_x10 - print the alphabet 10times in
 *lowercase followed by new line
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (count++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
