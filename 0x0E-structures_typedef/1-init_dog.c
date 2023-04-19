#include "dog.h"
/**
 * init_dog - initialize a struct
 * @d: the struct
 * @name: the name to assign to struct
 * @age: the age to assign to struct
 * @owner: the owner to assign to struct
 * Return: NOTHING
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
