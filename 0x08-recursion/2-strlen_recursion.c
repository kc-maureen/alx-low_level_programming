#include "holberton.h"
/**
 * _strlen_recursion - It takes one argument
 * It returns the length of a string
 * @s: pointer to the string
 * Return: returns the length of a string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
