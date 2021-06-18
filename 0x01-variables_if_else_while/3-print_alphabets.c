#include <stdio.h>

/**
 * main - This is the entry point
 * Description: Prints out the alphabet in lowercase and in uppercase
 * Return: The function returns 0
 */
int main(void)
{
char ph, ph1;

for (ph = 'a'; ph <= 'z'; ph++)
{
putchar(ph);
}
for (ph1 = 'A'; ph1 <= 'Z'; ph1++)
{
putchar(ph1);
}
putchar(10);
return (0);
}
