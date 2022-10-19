#include "main.h"
/**
 * print_sign - printing sign numbers
 * @n: the number to be checked
 * Return: 1 for positive, -1 for negative numbers
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('=');
		return ('/');
	}
}
