#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - It returns the sum of all its parameters
 * @n: Number of a arguments passed to the function
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	int sum = 0;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(val, int);
	}
	va_end(val);
	return (sum);
}
