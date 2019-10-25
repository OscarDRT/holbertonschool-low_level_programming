#include "variadic_functions.h"

/**
 * 
 */
void print_all(const char *const format, ...)
{
	int i, cont;
	double j;
	char *p;

	va_list valist;
	va_start(valist, format);
	while(format[cont] != '\0')
	{
		switch (format[cont])
		{
		case 'c' : i = va_arg(valist, int);
			printf("%c", i);
			break;
		case 'i' : i = va_arg(valist, int);
			printf("%i", i);
			break;
		case 'f' : j = va_arg(valist, double);
			printf("%f", j);
		case 's' : p = va_arg(valist, char *);
			if (p == NULL)
				p = "(nil)";
			printf("%s", p);
		}
		if ((format[cont] == 'c' || format[cont] == 'i' || 
		format[cont] == 'f' || format[cont] == 's'))
			printf(", ");
			cont++;
	}
	printf("\n");
}