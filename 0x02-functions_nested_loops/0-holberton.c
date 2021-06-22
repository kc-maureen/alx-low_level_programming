#include "holberton.h"
/**
 * main - Entry point
 *
 * _putchar: Calls function _putchar in hoberton.h
 *
 * Return: 0 if successful
 */

int main(void)
{
int i = 0;
char c;
char s[] = "Holberton\n";
while (i <= 9)
{
c = s[i];
_putchar(c);
i++;
}
return (0);
}
