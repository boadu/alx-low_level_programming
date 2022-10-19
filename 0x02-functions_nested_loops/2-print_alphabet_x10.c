#include "main.h"
/**
 * print_alphabet_x10.c - print 10 times.
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	char s;

	for (i = 0; i < 10; ++i)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
	}
}
