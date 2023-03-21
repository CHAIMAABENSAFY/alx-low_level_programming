 # include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int L, ch;

	for (L = 0; L<= 9; L++)
	{
		for (ch = 'a'; ch<= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
