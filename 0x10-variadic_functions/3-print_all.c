#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	int i, cont, a;
	double j;
	char *p;
	va_list valist;

	cont = 0;
	va_start(valist, format);
	while (format[cont] != '\0')
	{
		switch (format[cont])
		{
		case 'c':
			i = va_arg(valist, int);
			printf("%c", i);
			a = 1;
			break;
		case 'i':
			i = va_arg(valist, int);
			printf("%d", i);
			a = 1;
			break;
		case 'f':
			j = va_arg(valist, double);
			printf("%f", j);
			a = 1;
		case 's':
			p = va_arg(valist, char *);
			if (p == NULL)
				p = "(nil)";
			printf("%s", p);
			a = 1;
		default:
			a = 0;
			break;
		}
		cont++;
		if ((a == 1) && format[cont + 1] != '\0')
			printf(", ");

	}
	va_end(valist);
	printf("\n");
}
