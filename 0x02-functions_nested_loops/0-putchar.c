#include "main.h"
/**
 * main - start point
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "_putchar";

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	return (0);
}
