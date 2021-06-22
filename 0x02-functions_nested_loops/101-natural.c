
#include <stdio.h>
/**
 * main - It takes no parameter
 * It calculates the multiples of 3 and 5 below 1024 and sums them up
 *
 * Return: 0
 */
int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
