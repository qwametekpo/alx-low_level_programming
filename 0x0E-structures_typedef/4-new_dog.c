#include <stdlib.h>
#include "dog.h"

/**
* _strlen - returns e length of a string.
* @s: string to evaluate.
* Return: the length of the string.
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
* *_strcpy - copies the string pointed to by src.
* including the terminating null byte (\0).
* to the buffer pointed to by dest.
* @dest: pointer to the buffer in which we copy string.
* @src: string to copy.
* Return: the pointer to destin.
*/
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
* new_dog - creates new dog.
* @name: dog name.
* @age: dog age.
* @owner: dog owner.
* Return: pointer to the new dog (Success), NULL otherwise.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
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
