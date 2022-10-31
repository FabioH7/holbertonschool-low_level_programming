#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
