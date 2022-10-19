#include <stdio.h>
/**
 * main - prints sum of even nums
 *
 * Return: anything
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 100)
	{
		k  += j;

		if (k % 2 == 0)
			sum += k;

		j = k - j;

		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
