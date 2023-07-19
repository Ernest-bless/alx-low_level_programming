#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - returns length of a string
  * @s: string
  * Return: Length of the string.
  */
int _strlen(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}

/**
  * *_strcpy - copies the string
  * @dest: string destination
  * @src: string source
  * Return: Pointer to the destination.
  */
char *_strcpy(char *dest, char *src)
{
	int length, p;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (p = 0; p < length; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';

	return (dest);
}

/**
  * new_dog - creates a new dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: Pointer to new dog, otherwise NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
