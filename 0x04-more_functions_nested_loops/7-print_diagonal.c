#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: an int given by main
 * Return: void no return
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0) /* if 0 or negative just newline */
		_putchar('\n');
	for (i = 0; i < n; i++) /* want equal rows */
	{
		/* try me */
		/* when it works fine */
		/* i will try my possible best */
		/* it is about time */
		/* it will definitely work for me */
		for (j = n - i; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
