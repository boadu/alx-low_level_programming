#include <stdio.h>
/**
 * main - Print
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of an char: %d byte(s) \n", sizeof(a));
	printf("Size of a int: %d byte(s) \n", sizeof(b));
	printf("Size of a long int: %d byte(s) \n", sizeof(c));
	printf("Size of long long int: %d byte(s) \n", sizeof(d));
	printf("Size of float: %d byte(s) \n", sizeof(e));
	return (0);
}

