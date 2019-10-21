#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - count the number of characters
 *
 * @s: function parameter
 *
 * Return: Always cont
 */
int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

/**
 * _strncpy - copy
 *
 * @dest: receive a string and copy
 * @src: send the string copy
 * @n: bytes from src whit x null´s
 *
 * Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of puppy
 * @age: age of puppy
 * @owner: owner of puppy
 * Return: NULL or ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->age = age;
	ptr->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->name = _strncpy(ptr->name, name, (_strlen(name) + 1));
	ptr->owner = _strncpy(ptr->owner, owner, (_strlen(owner) + 1));
	return (ptr);
}
