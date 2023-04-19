#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif