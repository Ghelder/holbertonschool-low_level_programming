#ifndef DOG_H
#define DOG_H
/**
 * struct dog -> data dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: Defines a new struct dog type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
