#include "dog.h"
/**
 * init_dog - 
 * @d: the struct
 * @name: the name to assign to struct
 * @age: the age to assign to struct
 * @owner: the owner to assign to struct
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	else if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
