#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - contains elements name, age & owner
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*_DOG_H_ */
