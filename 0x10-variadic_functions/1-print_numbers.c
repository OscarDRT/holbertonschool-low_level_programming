#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n == 0)
		return;
	va_start(valist, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(valist, int));
	}
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d%s", va_arg(valist, int), separator);
			else
			{
				printf("%d", va_arg(valist, int));
			}
		}
		va_end(valist);
		printf("\n");
	}
}
