#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free allocated memory for struct dog
 * @
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d.age);
		free(d->owner);
		free(d);
	}
}
