#include <stdio.h>
/**
 * main - entry point
 * Description: this program Prints out the alphabet in lowercase
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	char ph;

	ph = 'a';
	while (ph <= 'z')
	{
		putchar(ph);
		ph++;
	}
	putchar('\n');
	return (0);
}
