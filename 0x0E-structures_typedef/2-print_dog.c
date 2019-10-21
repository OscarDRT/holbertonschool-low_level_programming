#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print organized puppy data
 * @d: ponter to struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (d->name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		printf("Age: %f\n", (*d).age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
