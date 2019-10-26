#include "variadic_functions.h"
/**
 * print_all - This function will print anything
 * @format: Format of the entry
 * Return: No return
 */

void print_all(const char *const format, ...)
{
	int i;
	int cont = 0;
	double j;
	char *s;
	va_list list;

	va_start(list, format);
	while (format[cont] != '\0')
	{
		switch (format[k])
		{
		case 'c':
			i = va_arg(list, int);
			printf("%c", i);
			break;
		case 'i':
			i = va_arg(list, int);
			printf("%i", i);
			break;
		case 'f':
			j = va_arg(list, double);
			printf("%f", j);
			break;
		case 's':
			s = va_arg(list, char *);
			if (s == NULL)
			{
				s = "(nil)";
			}
			printf("%s", s);
			break;
		}
		if ((format[cont] == 'c' || format[cont] == 'i' ||
		     format[cont] == 'f' || format[cont] == 's') &&
		    format[cont + 1] != '\0')
			printf(", ");
		cont++;
	}
	va_end(list);
	printf("\n");
}
