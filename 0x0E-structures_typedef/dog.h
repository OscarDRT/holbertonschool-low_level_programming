#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for puppy
 * @name: name of puppy
 * @age: age of puppy
 * @owner: name owner of puppy
 *
 * Description: struct that contains some information about the puppy
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - Typedef for struct dog
 */
typedef struct dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
