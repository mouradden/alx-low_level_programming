#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */
typedef struct dog {
	char *name;
	float age;
	char *owner;
};

#endif