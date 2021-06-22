#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - It takes on argument
 * prints all natural numbers from n to 98, followed by a new line
 * @n: starting value
 *
 * Return: returns void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
			n++;
		}
	}
}
