#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - It takes one argument
 * It copies a duplicates of a string to new allocated memoryy
 * @str: string to copy
 * Return: returns pointer to duplicate string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int a, b;
	char *c;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		;
	a++;
	c = malloc(a * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		c[b] = str[b];
	}
	return (c);
}
