#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: roy
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *roy;

	roy = malloc(sizeof(dog_t));
	if (roy == NULL)
	{
		return (NULL);
	}
	roy->name = malloc(sizeof(char) * strlen(name) + 1);
	if (roy->name == NULL)
	{
		free(roy);
		return (NULL);
	}
	strcpy(roy->name, name);
	roy->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (roy->owner == NULL)
	{
		free(roy->name);
		free(roy);
		return (NULL);
	}
	strcpy(roy->owner, owner);
	roy->age = age;

	return (roy);

}
