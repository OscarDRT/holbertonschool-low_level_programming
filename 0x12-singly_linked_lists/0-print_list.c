#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	if (h->str == '\0')
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n" (h->len), (h->str));
	}
	return(0);
}