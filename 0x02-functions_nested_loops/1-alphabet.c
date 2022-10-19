#include <main.h>
/**
 * print_alphabet - it prints an alphabet
 * Return: Always 0
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
