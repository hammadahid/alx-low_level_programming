#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for dog
 * @name: string literal
 * @owner: string literal
 * @age: float
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif