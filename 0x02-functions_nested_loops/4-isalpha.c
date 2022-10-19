#include "main.h"
/**
 * _isalpha - looks for alphabetic letters
 * @c: The letters to be checked
 *
 * Return: 1 for alpha letters
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
