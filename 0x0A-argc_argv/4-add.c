#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - It takes 2 arguments
 * It adds positive numbers
 * @argc: number of arguments passed to a function
 * @argv: pointer to arrays of strings
 * Return: returns zero if successful and returns 1 incase of error
 */
int main(int argc, char *argv[])
{
	int a = 0, b, c;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; c < argv[b][c]; c++)
		{
			if (isdigit(argv[b][c]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (b = 1; b < argc; b++)
	{
		a += atoi(argv[b]);
	}
	printf("%d\n", a);
	return (0);
}
