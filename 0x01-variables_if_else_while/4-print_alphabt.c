#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all alphabets in lowercase expect q and e
 *
 * Return: 0 if the code is successful
 */
int main(void)
{
	char ph;

	for (ph = 'a'; ph <= 'z'; ph++)
	{
		if (ph == 'e' || h == 'q')
			continue;
		putchar(ph);
	}
	putchar('\n');
	return (0);
}
