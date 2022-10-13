#include <stdio.h>
/**
 * main - Print
 * Return: Always 0
 */
int main(void)
{
	printf("Size of an int: %lu byte(s) \n", sizeof(int));
	printf("Size of a char: %lu byte(s) \n", sizeof(char));
	printf("Size of a float: %lu byte(s) \n", sizeof(float));
	printf("Size of long int: %lu byte(s) \n", sizeof(long int));
	printf("Size of long long int: %lu byte(s) \n", sizeof(long long int));
	return (0);
}
