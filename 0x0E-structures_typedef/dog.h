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
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
